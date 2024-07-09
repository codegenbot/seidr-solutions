Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int x : arr) {
        pq.push(x);
    }
    vector<int> result(k);
    for (int i = 0; i < k; i++) {
        result[i] = pq.top();
        pq.pop();
    }
    return result;
}