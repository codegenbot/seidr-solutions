#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    return a == b;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] != b[0]) {
            return a[0] < b[0];
        } else {
            return a[1] > b[1];
        }
    });
    return result;
}

int main() {
    vector<vector<int>> input = {{}, {1}, {1, 2, 3}};
    vector<vector<int>> output = get_row(input, 3);
    
    // Print the output for testing
    for (const vector<int>& row : output) {
        for (int val : row) {
            cout << val << ", ";
        }
        cout << endl;
    }

    return 0;
}