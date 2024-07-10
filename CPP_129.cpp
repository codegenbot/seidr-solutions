#include <queue>
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

int minPath(vector<pair<int,int>> graph, int n) {
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
    for (auto edge : graph) {
        pq.push({edge.second, edge});
    }
    
    vector<int> path(n+1);
    for (int i = 1; i <= n; ++i) {
        pair<int,pair<int,int>> top = pq.top();
        pq.pop();
        if (!issame(path, vector<int>(top.second.second+1,top.second.second+1))) {
            path[i] = top.first;
        }
    }
    
    return path[n];
}

int main() {
    vector<pair<int,int>> graph = {{1, 3}, {3, 2}};
    assert (minPath(graph, 10) == 1);
    return 0;
}