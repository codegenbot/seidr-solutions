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
    // You can add any necessary variables, functions.
    // You CANNOT use any data structure such as vector, map, set, etc.
    // You CANNOT use any external library.
    // Your code should be able to pass the test cases in the provided main function.
}

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void printGrid(vector<vector<int>> grid){
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main(){
    vector<vector<int>> grid1 = { {1,2,3}, {4,5,6}, {7,8,9} };
    int k1 = 3;
    vector<int> ans1 = minPath(grid1, k1);
    printVector(ans1);

    vector<vector<int>> grid2 = { {5,9,3}, {4,1,6}, {7,8,2} };
    int k2 = 1;
    vector<int> ans2 = minPath(grid2, k2);
    printVector(ans2);

    vector<vector<int>> grid3 = { {5,9,3,6}, {4,1,6,3}, {7,8,2,1}, {3,4,5,6} };
    int k3 = 5;
    vector<int> ans3 = minPath(grid3, k3);
    printVector(ans3);

    vector<vector<int>> grid4 = { {5,9,3,6,8}, {4,1,6,3,2}, {7,8,2,1,3}, {3,4,5,6,7}, {6,5,4,3,2} };
    int k4 = 9;
    vector<int> ans4 = minPath(grid4, k4);
    printVector(ans4);

    vector<vector<int>> grid5 = { {5,9,3,6,8}, {4,1,6,3,2}, {7,8,2,1,3}, {3,4,5,6,7}, {6,5,4,3,2} };
    int k5 = 15;
    vector<int> ans5 = minPath(grid5, k5);
    printVector(ans5);

    return 0;
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
