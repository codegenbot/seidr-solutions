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
  vector<int> res;
  vector<vector<int>> path;
  int m = grid.size(), n = grid[0].size();
  int min = INT_MAX;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(grid[i][j] < min)
        min = grid[i][j];
    }
  }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(grid[i][j] == min){
        vector<int> temp;
        temp.push_back(grid[i][j]);
        path.push_back(temp);
      }
    }
  }
  int size = path.size();
  for(int i = 1; i < k; i++){
    for(int j = 0; j < size; j++){
      int row = path[j][i-1] / n;
      int col = path[j][i-1] % n;
      if(col - 1 >= 0 && grid[row][col-1] > path[j][i-1]){
        path[j].push_back(grid[row][col-1]);
      }
      else if(col + 1 < n && grid[row][col+1] > path[j][i-1]){
        path[j].push_back(grid[row][col+1]);
      }
      else if(row - 1 >= 0 && grid[row-1][col] > path[j][i-1]){
        path[j].push_back(grid[row-1][col]);
      }
      else if(row + 1 < m && grid[row+1][col] > path[j][i-1]){
        path[j].push_back(grid[row+1][col]);
      }
    }
  }
  for(int i = 0; i < size; i++){
    if(path[i].size() < k){
      path.erase(path.begin() + i);
      i--;
      size--;
    }
  }
  if(path.size() == 0){
    res.push_back(min);
    return res;
  }
  min = path[0][k-1];
  for(int i = 1; i < path.size(); i++){
    if(path[i][k-1] < min){
      min = path[i][k-1];
    }
  }
  for(int i = 0; i < path.size(); i++){
    if(path[i][k-1] == min){
      res = path[i];
      return res;
    }
  }
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
