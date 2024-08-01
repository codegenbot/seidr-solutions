bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> maximum(vector<vector<int>> arr, int k) {
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j : arr[i]) {
            pq.push({j, i});
            if (pq.size() > k) {
                pq.pop();
            }
        }
    }
    vector<int> res(k);
    for (int i = k - 1; i >= 0; --i) {
        while (!pq.empty()) {
            if (pq.top().second == i) {
                res[i] = pq.top().first;
                pq.pop();
                break;
            } else {
                pq.pop();
            }
        }
    }
    return res;
}

int main() {
    assert(issame(maximum({{1, 2}, {3, -23}, {243, -400}, {0}}, 4), {243, -23, -400, 1}));
    return 0;
}