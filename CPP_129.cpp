/*
Given a grid with N rows and N columns (N >= 2) and a positive integer k, 
each cell of the grid contains a value. Every integer in the range {1, N * N}
inclusive appears exactly once on the cells of the grid.

You have to find the minimum path of length k in the grid. You can start
from any cell, and in each step you can move to any of the neighbor cells,
in other words, you can go to cells which share an edge with you current
cell.
Please note that a path of length k means visiting exactly k cells (not
necessarily distinct).
You CANNOT go off the grid.
A path A (of length k) is considered less than a path B (of length k) if
after making the ordered vectors of the values on the cells that A and B go
through (let's call them lst_A and lst_B), lst_A is lexicographically less
than lst_B, in other words, there exist an integer index i (1 <= i <= k)
such that lst_A[i] < lst_B[i] and for any j (1 <= j < i) we have
lst_A[j] = lst_B[j].
It is guaranteed that the answer is unique.
Return an ordered vector of the values on the cells that the minimum path go through.

Examples:

    Input: grid = { {1,2,3}, {4,5,6}, {7,8,9}}, k = 3
    Output: {1, 2, 1}

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
	vector<int> result;
	int size = grid.size();
	vector<vector<bool>> visited(size, vector<bool>(size, false));
	int min = INT_MAX;
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			visited[i][j] = true;
			int sum = grid[i][j];
			int count = 1;
			vector<int> path;
			path.push_back(grid[i][j]);
			dfs(grid, visited, sum, count, path, k, min, result, index, i, j);
			visited[i][j] = false;
		}
	}
	return result;
}
void dfs(vector<vector<int>> grid, vector<vector<bool>> visited, int sum, int count, vector<int> path, int k, int& min, vector<int>& result, int& index, int i, int j){
	if (count == k)
	{
		if (sum < min)
		{
			min = sum;
			result = path;
			index = i * grid.size() + j;
		}
		else if (sum == min && i * grid.size() + j < index)
		{
			result = path;
			index = i * grid.size() + j;
		}
		return;
	}
	int size = grid.size();
	if (i + 1 < size && !visited[i + 1][j])
	{
		visited[i + 1][j] = true;
		path.push_back(grid[i + 1][j]);
		dfs(grid, visited, sum + grid[i + 1][j], count + 1, path, k, min, result, index, i + 1, j);
		path.pop_back();
		visited[i + 1][j] = false;
	}
	if (i - 1 >= 0 && !visited[i - 1][j])
	{
		visited[i - 1][j] = true;
		path.push_back(grid[i - 1][j]);
		dfs(grid, visited, sum + grid[i - 1][j], count + 1, path, k, min, result, index, i - 1, j);
		path.pop_back();
		visited[i - 1][j] = false;
	}
	if (j + 1 < size && !visited[i][j + 1])
	{
		visited[i][j + 1] = true;
		path.push_back(grid[i][j + 1]);
		dfs(grid, visited, sum + grid[i][j + 1], count + 1, path, k, min, result, index, i, j + 1);
		path.pop_back();
		visited[i][j + 1] = false;
	}
	if (j - 1 >= 0 && !visited[i][j - 1])
	{
		visited[i][j - 1] = true;
		path.push_back(grid[i][j - 1]);
		dfs(grid, visited, sum + grid[i][j - 1], count + 1, path, k, min, result, index, i, j - 1);
		path.pop_back();
		visited[i][j - 1] = false;
	}
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
