```cpp
#include <vector>
#include <queue>

using namespace std;

bool operator>(const pair<int, int> &a, const pair<int, int> &b) {
    return a.first > b.first;
}

struct pair_int {
    int val;
    int i;
    int j;
};

vector<int> minPath(vector<vector<int>> grid, int k);
bool issame(const vector<int>& a, const vector<int>& b);

bool operator>(const pair_int &a, const pair_int &b) {
    return a.val > b.val;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool operator>(const pair_int &a, const pair_int &b) {
    return a.val > b.val;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    priority_queue<pair_int, vector<pair_int>, greater<pair_int>> pq; 
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pair_int p = {grid[i][j], i, j};
            pq.push(p);
        }
    }

    while (!pq.empty()) {
        int val = pq.top().val;
        int pos_i = pq.top().i;
        int pos_j = pq.top().j;
        pq.pop();

        res.push_back(val);

        if (k > 0) {
            --k;

            // Check all neighbors
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int ni = pos_i + i;
                    int nj = pos_j + j;

                    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        pair_int p = {grid[ni][nj], ni, nj};
                        pq.push(p);
                    }
                }
            }
        } else {
            break;
        }
    }

    return res;
}

#include <queue>

int main() 
{
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    vector<int> result = minPath(grid, k);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    assert(issame({1, 3, 1, 3, 1, 3, 1, 3, 1, 3}, minPath({{1, 3},{3,2}},10)));
    
    return 0;
}