vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
    }
    vector<int> result(k);
    for (int i = 0; i < k; i++) {
        result[i] = pq.top();
        pq.pop();
    }
    return result;
}