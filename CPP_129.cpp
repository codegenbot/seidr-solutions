#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {}

vector<int> minPath(vector<vector<int>> grid, int k);

int main() {
    vector<vector<int>> grid = {{1, 3, 5}, {2, 4, 10}, {6, 8, 9}};
    int k = 4;

    vector<int> result = minPath(grid, k);

    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}