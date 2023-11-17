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
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> minPath(vector<vector<int> > grid, int k)
{
        set<int> number;
        for(int i=1;i<grid.size();i++)
            {
                for(int j=0;j<grid[0].size();j++)
                number.insert(grid[i][j]);
            }
        for(int i=0;i<grid[0].size();i++)
            {
                for(int j=0:j<grid.size();j++)
                number.insert(grid[j][i])
            }
        vector<int> min_seq;
        int i=1,j=0;
        int min_number=INT_MAX,index=0;
        while(i<max_seq.size()&&j<min_seq.size()){
            if(i>=10&&min_seq.at(j)<=9&&min_seq.at(j)==min_seq.at(j-1)*10+min_seq.at(j)){
                int now=((min_seq.at(j)*10)+min_seq.at(j+1) );
                j=j+2;
                if(min_number> now)
                {
                    index=i;
                    min_number=min_seq.at(j);
                }
                i=i+2;
                }else if(min_seq[i]>=10&&min_seq[j]>=10){
                if(min_number>((min_seq[i]/10)*(min_seq[i]%10)))
                {
                    min_number=((min_seq[i]/10)*(min_seq[i]%10));
                    index=i;
                }
                i++;j++;
                }
            else if(min_seq[i]<10&&(min_seq[j]<10))
                 { int now=min(min_seq[i],min_seq[j]);
                 i++;j++;
                 if(now<min_number) {
                    index=i;
                    min_number=min_seq.at(i);
                 }
                 }
        }
        if(index<100)
            index=0;
        return index;

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
}
}
