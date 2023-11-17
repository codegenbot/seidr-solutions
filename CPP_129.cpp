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
#include <stdio.h>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
	int N = grid.size();
	int M = grid[0].size();

	vector<vector<vector<int>>> dp(N, vector<vector<int>>(M, vector<int>(k + 1, -1)));
	vector<vector<vector<int>>> path(N, vector<vector<int>>(M, vector<int>(k + 1, -1)));

	deque<vector<int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			dp[i][j][1] = grid[i][j];
			path[i][j][1] = grid[i][j];
			q.push_back({ i, j, 1 });
		}
	}

	while (!q.empty()) {
		vector<int> cur = q.front();
		q.pop_front();
		int x = cur[0], y = cur[1], step = cur[2];
		if (step == k) continue;
		for (int i = 0; i < 4; i++) {
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (dp[nx][ny][step + 1] == -1) {
				dp[nx][ny][step + 1] = dp[x][y][step] + grid[nx][ny];
				path[nx][ny][step + 1] = grid[nx][ny];
				q.push_back({ nx, ny, step + 1 });
			}
			else if (dp[nx][ny][step + 1] == dp[x][y][step] + grid[nx][ny]) {
				path[nx][ny][step + 1].push_back(grid[nx][ny]);
			}
			else if (dp[nx][ny][step + 1] > dp[x][y][step] + grid[nx][ny]) {
				dp[nx][ny][step + 1] = dp[x][y][step] + grid[nx][ny];
				path[nx][ny][step + 1].clear();
				path[nx][ny][step + 1].push_back(grid[nx][ny]);
			}
		}
	}

	vector<int> ans = path[0][0][k];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (path[i][j][k] < ans) {
				ans = path[i][j][k];
			}
		}
	}
	return ans;
}
