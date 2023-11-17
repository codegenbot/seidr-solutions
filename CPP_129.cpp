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
<int> x(n); //長度為 n，全部初始化為 0
<int> x{n}; // x 只有一個元素，且值為 n
<int> v = {0}; // v 有一個元素，且值為 0
<int> v {0};

Examples:

    Input: grid = { {1,2,3}, {4,5,6}, {7,8,9}}, k = 3
    Output: {1, 2, 1}
#include  <stdio.h>
#include <string.h>
#include <cstdio>
#include <cmath>
#include <climits>
#include <stdlib.h>
#include <limits>
#include <iostream>
#include <vector>

using namespace std;
int lst_B[1000];//全局變量的定義
vector<int> minPath(vector<vector<int>> grid, int k){
    if (grid.size()==0 || grid[0].size() == 0)
        cout << "Empty grid" << std::endl;
    k = floor(k/2);
    int n=grid.size(),i=0,j=0,l=0;
    int im=0,jm=0,lm=0;
    int mm_min=grid[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(l=1;l<=k;l++){
                if(((i-l)>=0) || ((i+l)<=n-1) || ((j-l)>=0) || ((j+l)<=n-1)){
                    
                }
            }
        }
    }
    
    std::cout << "mm_min=" << mm_min << std::endl;
     

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
}
int main(){//主程序
    
    
}
