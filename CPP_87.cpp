#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<vector<int>> lst = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x = 5;

    vector<vector<int>> result = get_row(lst, x);
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}