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
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> res;
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i-1>=0){
                if(grid[i][j]<grid[i-1][j]){
                    dp[i][j]=dp[i-1][j];
                }
            }
            if(j-1>=0){
                if(grid[i][j]<grid[i][j-1]){
                    dp[i][j]=dp[i][j-1];
                }
            }
            if(j+1<m){
                if(grid[i][j]<grid[i][j+1]){
                    dp[i][j]=dp[i][j+1];
                }
            }
            if(i+1<n){
                if(grid[i][j]<grid[i+1][j]){
                    dp[i][j]=dp[i+1][j];
                }
            }
        }
    }
    int i=0;
    int j=0;
    res.push_back(grid[i][j]);
    while(k!=1){
        if(i-1>=0){
            if(dp[i-1][j]==dp[i][j]+1){
                i=i-1;
                res.push_back(grid[i][j]);
                k--;
                continue;
            }
        }
        if(j-1>=0){
            if(dp[i][j-1]==dp[i][j]+1){
                j=j-1;
                res.push_back(grid[i][j]);
                k--;
                continue;
            }
        }
        if(j+1<m){
            if(dp[i][j+1]==dp[i][j]+1){
                j=j+1;
                res.push_back(grid[i][j]);
                k--;
                continue;
            }
        }
        if(i+1<n){
            if(dp[i+1][j]==dp[i][j]+1){
                i=i+1;
                res.push_back(grid[i][j]);
                k--;
                continue;
            }
        }
    }
    return res;

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
}
int main(){
    vector<vector<int>> grid={{1,2,3},{4,5,6},{7,8,9}};
    int k=3;
    vector<int> res=minPath(grid,k);
    for(int i=0;i<res.size();i++){
        printf("%d ",res[i]);
    }
    printf("\n");
}
