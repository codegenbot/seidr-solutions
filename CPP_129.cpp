using namespace std;

bool operator>(const pair<int, int> &a, const pair<int, int> &b) {
    return a.first > b.first;
}

vector<int> minPath(vector<vector<int>> grid, int k);
bool issame(vector<int>, vector<int>);

struct pair_int {
    int val;
    int i;
    int j;
};

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pair_int p = {grid[i][j], i, j};
            pq.push({p.val, make_pair(p.i, p.j)});
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        int pos_i = pq.top().second.first;
        int pos_j = pq.top().second.second;
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
                        pq.push({p.val, make_pair(p.i, p.j)});
                    }
                }
            }
        } else {
            break;
        }
    }

    return res;
}

int main() 
{
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    vector<int> result = minPath(grid, k);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    assert(issame({1, 3, 1, 3, 1, 3, 1, 3, 1, 3}, minPath({{1, 3}, {3, 2}}, 10)));
    
    return 0;
}