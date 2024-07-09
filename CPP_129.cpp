#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int val;
    pair<int,int> pos;

    bool operator<(const Node& other) const {
        return val > other.val;
    }
};

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>>(n, vector<bool>(n, false)) visited;
    priority_queue<Node> pq;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                Node node = {grid[i][j], {i, j}};
                pq.push(node);
                visited[i][j] = true;
            }
        }
    }

    vector<int> res;

    while (!pq.empty()) {
        int val = pq.top().val;
        int x = pq.top().pos.first;
        int y = pq.top().pos.second;
        res.push_back(val);
        pq.pop();

        if (k > 0) {
            --k;

            for (int dx : {-1, 0, 1}) {
                for (int dy : {-1, 0, 1}) {
                    int nx = x + dx;
                    int ny = y + dy;

                    if(nx>=0&&nx<n&&ny>=0&&ny<n&&!visited[nx][ny]){
                        visited[nx][ny] = true;
                        Node node = {grid[nx][ny], {nx, ny}};
                        pq.push(node);
                    }
                }
            }
        } else {
            break;
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    vector<int> result = minPath(grid, k);

    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
}