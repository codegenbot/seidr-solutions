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

*/
    Input: grid = { {1,2,3}, {4,5,6}, {7,8,9}}, k = 3
    Output: {1, 2, 1}
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> minPath(vector<vector<int>> grid, int k){

    Input: grid = { {5,9,3}, {4,1,6}, {7,8,2}}, k = 1
    Output: {1}
    // Complete the following code given the task description and function signature.
    // You CAN change the function signature if you want.
    // You CANNOT change the task description.
    // You CANNOT use global variables.
    // You CANNOT import any library.
    // You CANNOT use any function from any library.
    // You CANNOT use any function or data structure from STL.
    // Your code must run in O(N * k) time.
    // Your code must run in O(N) space.
    // Your code must be deterministic.
bool issame(vector<int> a,vector<int>b){
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]) return false;
    }
    return true;
}
int main(){
    vector<int> minPath(vector<vector<int>> grid, int k){
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), 0));
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (i == 0 && j == 0) {
                    dp[i][j] = grid[i][j];
                } else if (i == 0) {
                    dp[i][j] = dp[i][j - 1] + grid[i][j];
                } else if (j == 0) {
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                } else {
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
                }
            }
        }
        vector<int> ans;
        int i = grid.size() - 1;
        int j = grid[0].size() - 1;
        while (i >= 0 || j >= 0) {
            ans.push_back(grid[i][j]);
            if (i == 0 && j == 0) {
                break;
            } else if (i == 0) {
                j--;
            } else if (j == 0) {
                i--;
            } else {
                if (dp[i - 1][j] < dp[i][j - 1]) {
                    i--;
                } else {
                    j--;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        if (ans.size() > k) {
            ans.erase(ans.begin() + k, ans.end());
        }
        return ans;
    }

    assert (issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 5) , {1, 3, 1, 3, 1}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 3) , {1, 3, 1}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 2) , {1, 3}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 1) , {1}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 0) , {}));
    assert (issame(minPath({{1, 3}, {3, 2}}, -1) , {}));
    assert (issame(minPath({{1, 3}, {3, 2}}, -5) , {}));
    assert (issame(minPath({{1, 3}, {3, 2}}, -10) , {}));
    return 0;
}

{
    assert (issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 5) , {1, 3, 1, 3, 1}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 3) , {1, 3, 1}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 2) , {1, 3}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 1) , {1}));
    assert (issame(minPath({{1, 3}, {3, 2}}, 0) , {}));
    assert (issame(minPath({{1, 3}, {3, 2}}, -1) , {}));
    assert (issame(minPath({{1, 3}, {3, 2}}, -5) , {}));
    assert (issame(minPath({{1, 3}, {3, 2}}, -10) , {}));
    return 0;
}
