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
	vector<int> v;
	int n = grid.size();
	int m = grid[0].size();
	int min = 9999999;
	int min_x;
	int min_y;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(grid[i][j] < min){
				min = grid[i][j];
				min_x = i;
				min_y = j;
			}
		}
	}
	for(int i = 0; i < k; i++){
		v.push_back(min);
		if(min_x > 0 && grid[min_x - 1][min_y] < grid[min_x + 1][min_y]){
			min_x--;
		}
		else if(min_x < n - 1 && grid[min_x + 1][min_y] < grid[min_x - 1][min_y]){
			min_x++;
		}
		else if(min_y > 0 && grid[min_x][min_y - 1] < grid[min_x][min_y + 1]){
			min_y--;
		}
		else if(min_y < m - 1 && grid[min_x][min_y + 1] < grid[min_x][min_y - 1]){
			min_y++;
		}
		else if(min_x > 0){
			min_x--;
		}
		else if(min_x < n - 1){
			min_x++;
		}
		else if(min_y > 0){
			min_y--;
		}
		else if(min_y < m - 1){
			min_y++;
		}
		min = grid[min_x][min_y];
	}
	return v;
}

int main(){
	vector<vector<int>> grid = {{5,9,3}, {4,1,6}, {7,8,2}};
	int k = 1;
	vector<int> v = minPath(grid, k);
	for(int i = 0; i < v.size(); i++){
		printf("%d ", v[i]);
	}
	printf("\n");
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
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
