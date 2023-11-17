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
    int n = grid.size();
    if(n == 0 || k == 0) return res;
    int m = grid[0].size();
    if(m == 0 || k == 0) return res;
    if(k > n * m) return res;
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k + 1, INT_MAX)));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dp[i][j][1] = grid[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int l = 2; l <= k; l++){
                if(i > 0) dp[i][j][l] = min(dp[i][j][l], dp[i - 1][j][l - 1]);
                if(i < n - 1) dp[i][j][l] = min(dp[i][j][l], dp[i + 1][j][l - 1]);
                if(j > 0) dp[i][j][l] = min(dp[i][j][l], dp[i][j - 1][l - 1]);
                if(j < m - 1) dp[i][j][l] = min(dp[i][j][l], dp[i][j + 1][l - 1]);
            }
        }
    }
    int min_val = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            min_val = min(min_val, dp[i][j][k]);
        }
    }
    vector<vector<int>> path(n, vector<int>(m, -1));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(dp[i][j][k] == min_val) path[i][j] = k;
        }
    }
    int i = 0, j = 0;
    for(int l = k; l > 1; l--){
        res.push_back(grid[i][j]);
        if(i > 0 && path[i - 1][j] == l - 1){
            i--;
            continue;
        }
        if(i < n - 1 && path[i + 1][j] == l - 1){
            i++;
            continue;
        }
        if(j > 0 && path[i][j - 1] == l - 1){
            j--;
            continue;
        }
        if(j < m - 1 && path[i][j + 1] == l - 1){
            j++;
            continue;
        }
    }
    res.push_back(grid[i][j]);
    return res;
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
