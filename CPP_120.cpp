bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<vector<int>> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr[k-1]) {
        pq.push(i);
        if (pq.size() > 0) {
            pq.pop();
        }
    }
    vector<int> res(k);
    for (int i = k - 1; i >= 0; --i) {
        res[i] = pq.top();
        pq.pop();
    }
    return res;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    // Your code here
}