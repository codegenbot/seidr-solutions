#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int minPath(vector<vector<int>>& edges, int n) {
    vector<int> dist(n+1, 1000000);
    dist[1] = 0;
    
    for (int i = 1; i <= n; i++) {
        for (auto edge : edges) {
            if (dist[edge[0]] + edge[2] < dist[edge[1]]) {
                dist[edge[1]] = dist[edge[0]] + edge[2];
            }
        }
    }
    
    vector<int> path;
    int curr = n;
    while (curr != 1) {
        for (auto edge : edges) {
            if (dist[edge[0]] == dist[curr] - edge[2]) {
                path.push_back(edge[1]);
                curr = edge[0];
                break;
            }
        }
    }
    
    path.push_back(1);
    reverse(path.begin(), path.end());
    
    return path.size();
}

int main() {
    vector<vector<int>> edges = {{1, 3, 10}, {3, 2, 3}};
    int n = 4;
    cout << minPath({{1, 3, 10}, {3, 2, 3}}, 4) << endl;
    
    return 0;
}