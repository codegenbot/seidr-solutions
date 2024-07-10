#include <bits/stdc++.h>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int minPath(vector<pair<int, int>>& edges, int n) {
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    for(int i = 0; i < n-1; i++) {
        pq.push({edges[i].second, {i, edges[i].first}});
    }
    int res = 0;
    vector<int> path(n);
    while(!pq.empty()) {
        pair<int, pair<int, int>> p = pq.top();
        pq.pop();
        if(path[p.second.first] == 0) {
            res += p.first;
            for(int i = 1; i < n; i++) {
                if(path[i-1] == 0 && !issame(path, {i, p.second.second})) {
                    path[i] = 1;
                    pq.push({edges[i-1].second, {i, edges[i-1].first}});
                }
            }
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> edges(n-1);
    for(int i = 0; i < n-1; i++) {
        cin >> edges[i].first >> edges[i].second;
    }
    cout << minPath(edges, n) << endl;
    return 0;
}