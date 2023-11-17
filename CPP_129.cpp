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
#include<climits>
    Output: {1}
#include<climits>
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> res;
    int n = grid.size();
    if(n == 0) return res;
    int m = grid[0].size();
    if(m == 0) return res;
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 && j == 0){
                dp[i][j] = grid[i][j];
            }
            else if(i == 0){
                dp[i][j] = min(dp[i][j - 1], grid[i][j]);
            }
            else if(j == 0){
                dp[i][j] = min(dp[i - 1][j], grid[i][j]);
            }
            else{
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
                dp[i][j] = min(dp[i][j], grid[i][j]);
            }
        }
    }
    int i = 0, j = 0;
    while(k > 0){
        res.push_back(grid[i][j]);
        if(i == n - 1 && j == m - 1) break;
        if(i == n - 1){
            j++;
        }
        else if(j == m - 1){
            i++;
        }
        else{
            if(dp[i + 1][j] < dp[i][j + 1]){
                i++;
            }
            else{
                j++;
            }
        }
        k--;
    }
    return res;
}
int main(){
}
