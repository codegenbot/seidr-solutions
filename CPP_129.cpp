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


    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}

    Input: grid = { {1, 3}, {3, 2}}, k = 10
    Output: {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}

    Input: grid = { {1, 2, 3} }, k = 2
    Output: {1, 2}

    Input: grid = { {1, 2}, {3, 4} }, k = 3
    Output: {1, 2, 1}

    Input: grid = { {4, 2, 3, 1}, {1, 5, 3, 2}, {2, 1, 6, 3}, {1, 2, 3, 7} }, k = 6
    Output: {4, 2, 1, 2, 1, 2}

    Input: grid = { {1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}, {4, 5, 6, 7, 8}, {5, 6, 7, 8, 9} }, k = 9
    Output: {1, 2, 3, 4, 5, 6, 7, 8, 9}

    Input: grid = { {1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}, {4, 5, 6, 7, 8}, {5, 6, 7, 8, 9} }, k = 10
    Output: {1, 2, 3, 4, 5, 6, 7, 8, 9, 1}
*/
    Input: grid = { {1,2,3}, {4,5,6}, {7,8,9}}, k = 3
    Output: {1, 2, 1}
#include<cassert>
#include<stdio.h>
bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
int main(){
    assert (issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
}
