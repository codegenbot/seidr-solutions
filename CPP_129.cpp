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
#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;
int min_path(vector<vector<int>> g, int k, int i, int j){
  // PQ to keep track of min_path
  priority_queue<int> pq;
  vector<vector<bool>> visited(g.size(), vector<bool>(g[0].size(), false));
  int path_len = 1;
  dfs(g, k, i, j, visited, pq);
  int path1 = pq.top();
  pq.pop();

  // Recompute path after finding the min_path.
  vector<vector<bool>> visited2(g.size(), vector<bool>(g[0].size(), false));
  int path_len2 = 1;
  dfs(g, k, i, j, visited, pq);
  int path2 = pq.top();
  pq.pop();

  return min(path1, path2);



void dfs(vector<vector<int>> g, int k, int i, int j, vector<vector<bool>> visited, priority_queue<int> pq){
  if(i < 0 || i >= g.size() || j < 0 || j >= g[i].size() || visited[i][j]){
    return;
  }

  if(path_len > k){
    pq.push(e);
    return;
  }
  visited[i][j] = true;
  dfs(g, k, i - 1, j, visited);
  dfs(g, k, i + 1, j, visited);
  dfs(g, k, i, j + 1, visited);
  dfs(g, k, i, j - 1, visited);
}

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
}
#include<stdio.h>
