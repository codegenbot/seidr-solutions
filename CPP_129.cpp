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

    Input: grid = { {1,2,3}, {4,5,6}, {7,8,9}}, k = 3    v[i][j] indicates how path_i go to j's next order
    Output: {1, 2, 1}

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
*/
	int m = grid.size();
	int n = grid[0].size();
	vector<vector<int>>path(m,vector<int>(n,k+1));
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			for(int x=-1;x<=1;x++)
				for(int y=-1;y<=1;y++){				//每个path有4道可能性，按道走。得到的pathpath再从存在的pathpath里挑最小的
					if((x!=0&&y!=0)||(i+x<0&&i+x>=m&&j+y<0&&j+y>=n))continue;
					path[i][j]=min(path[i][j],path[i+x][y+j]+1);
				}
	vector<int> result(k);
	result[0]=grid[0][0];
	for(int i=1;i<k;i++)
		result[i]=grid[(i+1)/n][(i+1)%m];
	return result;
}
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
