vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int x : arr) {
        pq.push(x);
    }
    vector<int> res(k);
    for (int i = 0; i < k; i++) {
        res[i] = pq.top();
        pq.pop();
    }
    return res;
}