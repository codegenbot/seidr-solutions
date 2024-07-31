#include <vector>
#include <iostream>

using namespace std;

bool issame(int a, int b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k);

int main() {
    // Example usage
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 5;
    vector<int> result = minPath(grid, k);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (const vector<int>& row : grid) {
        for (int num : row) {
            if (issame(num, k)) {
                result.push_back(num);
            }
        }
    }
    return result;
}