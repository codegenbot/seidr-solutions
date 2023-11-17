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

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1

    // Complete the following code given the task description and function signature.
    return path;

    Output: {1}
*/
    vector<vector<int>> visited(grid.size(), vector<int>(grid.size(), 0));
    vector<int> path;
}
    // Complete the following code given the task description and function signature.
    return path;
}
int main(){
    vector<vector<int>> grid(3, vector<int>(3, 0));
    grid[0][0] = 1;
    grid[0][1] = 2;
    grid[0][2] = 3;
    grid[1][0] = 4;
    grid[1][1] = 5;
    grid[1][2] = 6;
    grid[2][0] = 7;
    grid[2][1] = 8;
    grid[2][2] = 9;
    vector<int> path = minPath(grid, 3);
    for(int i = 0; i < path.size(); i++){
        cout << path[i] << " ";
    }
    cout << endl;
    grid[0][0] = 5;
    grid[0][1] = 9;
    grid[0][2] = 3;
    grid[1][0] = 4;
    grid[1][1] = 1;
    grid[1][2] = 6;
    grid[2][0] = 7;
    grid[2][1] = 8;
    grid[2][2] = 2;
    path = minPath(grid, 1);
    for(int i = 0; i < path.size(); i++){
        cout << path[i] << " ";
    }
    cout << endl;
    return 0;
}
