bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<vector<int>> arr, int k) {
    priority_queue<pair<int,int>> pq;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            pq.push({arr[i][j], i});
            if (pq.size() > k) {
                pq.pop();
            }
        }
    }
    vector<int> res(k);
    for (int i = k - 1; i >= 0; --i) {
        while (!pq.empty() && pq.top().second != i) {
            pq.pop();
        }
        if (!pq.empty()) {
            res[i] = pq.top().first;
            pq.pop();
        } else {
            break;
        }
    }
    return res;
}

int main() {
    assert(issame(maximum({{1, 2, 3}, {4, 5, 6}, {-23, 243, -400}}, 0), {}));
    // Your code here
}