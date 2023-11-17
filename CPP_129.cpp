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
#include<algorithm>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
    int n=grid.size();
    vector<int> res;
    int min=grid[0][0];
    int i;
    int j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(grid[i][j]<min){
                min=grid[i][j];
            }
        }
    }
    res.push_back(min);
    for(i=1;i<k;i++){
        int min=INT_MAX;
        int x,y;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(grid[j][k]<min){
                    min=grid[j][k];
                    x=j;
                    y=k;
                }
            }
        }
        res.push_back(min);
        grid[x][y]=INT_MAX;
        if(x-1>=0){
            grid[x-1][y]=INT_MAX;
        }
        if(x+1<n){
            grid[x+1][y]=INT_MAX;
        }
        if(y-1>=0){
            grid[x][y-1]=INT_MAX;
        }
        if(y+1<n){
            grid[x][y+1]=INT_MAX;
        }
    }
    return res;

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
}
int main(){
    vector<vector<int>> grid;
    vector<int> temp;
    temp.push_back(1);
    temp.push_back(2);
    temp.push_back(3);
    grid.push_back(temp);
    temp.clear();
    temp.push_back(4);
    temp.push_back(5);
    temp.push_back(6);
    grid.push_back(temp);
    temp.clear();
    temp.push_back(7);
    temp.push_back(8);
    temp.push_back(9);
    grid.push_back(temp);
    temp.clear();
    vector<int> res=minPath(grid,3);
    for(int i=0;i<res.size();i++){
        printf("%d\n",res[i]);
    }
}
