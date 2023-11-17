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
    vector<int> result;
    // Your code here.
#include<algorithm>
    return result;
}
	vector<int> result;
	int n = grid.size();
	if (k == 1) {
		result.push_back(grid[0][0]);
		return result;
	}
	vector<vector<int>> dp(n, vector<int>(n, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			dp[i][j] = i * n + j + 1;
		}
	}
	for (int i = 1; i < n; i++) {
		dp[i][0] = dp[i - 1][0] + n;
	}
	for (int i = 1; i < n; i++) {
		dp[0][i] = dp[0][i - 1] + 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	int x = 0, y = 0;
	int i = 0;
	while (i < k) {
		result.push_back(grid[x][y]);
		if (x == n - 1 && y == n - 1) {
			return result;
		}
		if (x == n - 1) {
			y++;
		}
		else if (y == n - 1) {
			x++;
		}
		else {
			if (dp[x + 1][y] < dp[x][y + 1]) {
				x++;
			}
			else {
				y++;
			}
		}
		i++;
	}
	return result;
}
int main(){
	int n, k;
	cin >> n >> k;
	vector<vector<int>> grid(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}
	vector<int> result = minPath(grid, k);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){
