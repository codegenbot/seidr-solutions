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
#include<algorithm>
#include<queue>
#include<iostream>

bool isValid(int i, int j, int n){
    return i >= 0 && i < n && j >= 0 && j < n;
}

bool isSafe(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &visited){
    return isValid(i, j, grid.size()) && visited[i][j] == 0 && grid[i][j] != 0;
}

void bfs(vector<vector<int>> &grid, vector<vector<int>> &visited, vector<int> &path, int k){
    queue<pair<int, int>> q;
    q.push({0, 0});
    while(!q.empty()){
        int s = q.size();
        for(int i = 0; i < s; ++i){
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first, y = p.second;
            visited[x][y] = 1;
            path.push_back(grid[x][y]);
            if(path.size() == k) return;
            if(isSafe(x - 1, y, grid, visited)) q.push({x - 1, y});
            if(isSafe(x + 1, y, grid, visited)) q.push({x + 1, y});
            if(isSafe(x, y - 1, grid, visited)) q.push({x, y - 1});
            if(isSafe(x, y + 1, grid, visited)) q.push({x, y + 1});
        }
    }
}

#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
    vector<vector<int>> visited(grid.size(), vector<int>(grid.size(), 0));
    vector<int> path;
}
    // Complete the following code given the task description and function signature.
    return path;
}
int main(){
