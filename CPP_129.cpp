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
void back_tracking(vector <double> & res1, vector<vector<bool>> & flag, vector < double> &path, vector<int> &table, vector<vector<int>>& grid, int &k,  int l){
    int l_col = flag.size();
    int l_row = flag[0].size();
    if( k < 0)
        return;
    if( k == 0){
        path[l-k] = table[grid[l_row-1][l_col-1]];
        if( res1 > path)
            res1 = path;
        return;
    }

    for( int i = 0; i < l_col; i++){
        if( flag[l_row-1][i] == false && i < l_col-1){
            path[l-k] = table[grid[l_row-1][i]];
            flag[l_row-1][i] = true;
            back_tracking(res1, flag,path,table,grid, --k, l);
            flag[l_row-1][i] = false;
            k++;
        }
        if( flag[l_row-1][i] == false && i == l_col-1){
            continue;
        }
    }

    for( int i = 0; i < l_col; i++){
        if( flag[i][l_col-1] == false && i < l_col -1){
        path[l-k] = table[grid[i][l_col-1]];
        flag[i][l_col-1] = true;
        back_tracking(res1, flag, path, table, grid, --k,l);
        flag[i][l_col-1]= false;
        k++;
        }
        if( flag[i][l_col-1] == false && i == l_col-1){
            continue;
        }
    }
    for( int i = l_col-1; i >= 0; i--){
        if( flag[0][i] == false && i > 0){
            path[l-k] = table[grid[0][i]];
            flag[0][i] = true;
            back_tracking(res1, flag, path, table, grid, --k,l);
            flag[0][i]= false;
            k++;
        }
        if( flag[0][i] == false && i == 0){
            continue;
        }
    }
    for( int i = l_col-1; i >= 0; i--){
        if( flag[i][0] == false && i > 0){
            path[l-k] = table[grid[i][0]];
            flag[i][0] = true;
            back_tracking(res1, flag, path, table, grid, --k,l);
            flag[i][0]= false;
            k++;
        }
           if( flag[i][0] == false && i == 0){
            continue;
        }
    }
    return;
}

*/
    double l = grid.size() * 2 + grid[0].size() *2 -4;
    vector<int> res;
    if( k > l || grid.size() == 0 || k < 1)
        return res;
    else{
        vector<double> res1(l,l+1);
        vector<vector<bool>> flag(grid.size(),vector<bool>(grid[0].size(),false));
        vector<double> path(l);
        for( int j = 0; j < grid.size(); ++j){
            path[j] = grid[0][j];
            flag[0][j] = true;
        }
        for(int i = 0; i < grid.size()-1; ++i){
            path[i+grid.size()] = grid[i+1][grid.size()-1];
            flag[i+1][grid.size()-1] = true;
        }
        for(int i = grid.size()-1; i >=0 ; --i){
            path[grid.size() + grid.size()-1 -i] = grid[grid.size()-1][i];
            flag [grid.size()-1][i] = true;
        }
        for(int i = grid.size()-1; i >= 1; --i){
            path[grid.size() + grid.size()-1 + (grid.size()-1-i)] = grid[i][0];
            flag [i][0] = true;
        }
        for( int i = 1; i <= grid.size()*grid.size(); ++i){
            vector<double> tablej(2);
            tablej[0] = i;
            tablej[1] = INT_MAX;
            table.push_back(tablej);
        }

        back_tracking( res1, flag, path, table, grid, k, l);
        for(int i = 0; i < k; ++i)
            res.push_back ((int)res1[i]);
        return res;
    }
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
