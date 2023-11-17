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
    // Complete the following code given the task description and function signature.
    // You can add any other functions or variables you need.
    // You are not allowed to change the function signature.
    // You are not allowed to use any library functions such as sort.
    int n = grid.size();
    if(k < 1 || k > n * n)
        return vector<int>();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(k + 1, 0)));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            dp[i][j][1] = grid[i][j];
        }
    }
    for(int len = 2; len <= k; len++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int min_val = INT_MAX;
                if(i > 0){
                    min_val = min(min_val, dp[i - 1][j][len - 1]);
                }
                if(i < n - 1){
                    min_val = min(min_val, dp[i + 1][j][len - 1]);
                }
                if(j > 0){
                    min_val = min(min_val, dp[i][j - 1][len - 1]);
                }
                if(j < n - 1){
                    min_val = min(min_val, dp[i][j + 1][len - 1]);
                }
                dp[i][j][len] = min_val;
            }
        }
    }
    vector<int> res;
    int i = 0, j = 0;
    while(res.size() < k){
        res.push_back(grid[i][j]);
        int min_val = INT_MAX;
        if(i > 0 && dp[i - 1][j][k - res.size()] < min_val){
            min_val = dp[i - 1][j][k - res.size()];
            i--;
        }
        if(i < n - 1 && dp[i + 1][j][k - res.size()] < min_val){
            min_val = dp[i + 1][j][k - res.size()];
            i++;
        }
        if(j > 0 && dp[i][j - 1][k - res.size()] < min_val){
            min_val = dp[i][j - 1][k - res.size()];
            j--;
        }
        if(j < n - 1 && dp[i][j + 1][k - res.size()] < min_val){
            min_val = dp[i][j + 1][k - res.size()];
            j++;
        }
    }
    return res;
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
