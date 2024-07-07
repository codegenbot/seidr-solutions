vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int num : arr) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }
    vector<int> result(k);
    for (int i = k - 1; i >= 0; --i) {
        result[i] = pq.top();
        pq.pop();
    }
    return result;
}