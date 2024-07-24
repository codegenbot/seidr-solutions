#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    
    // create a priority queue to store cells in the form of {value, row, col}
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>> pq;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pq.push({grid[i][j], {i, j}});
        }
    }
    
    while (!pq.empty()) {
        int value = pq.top().first;
        int row = pq.top().second.first;
        int col = pq.top().second.second;
        
        // remove the top element from the priority queue
        pq.pop();
        
        res.push_back(value);
        
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                if (abs(i) + abs(j) == 1 && row + i >= 0 && col + j >= 0 && row + i < n && col + j < n) {
                    // add neighbors to the priority queue
                    pq.push({grid[row + i][col + j], {row + i, col + j}});
                }
            }
        }
        
        if (res.size() == k) {
            break;
        }
    }
    
    return res;
}

int main() {
    // test cases
    vector<vector<int>> grid1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k1 = 3;
    cout << "[";
    for (auto x : minPath(grid1, k1)) {
        cout << x << " ";
    }
    cout << "]";

    vector<vector<int>> grid2 = {{5, 9, 3}, {4, 1, 6}, {7, 8, 2}};
    int k2 = 1;
    cout << "\n[";
    for (auto x : minPath(grid2, k2)) {
        cout << x << " ";
    }
    cout << "]";

    return 0;
}