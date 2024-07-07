Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
    }
    vector<int> res;
    for (int i = 0; i < k; i++) {
        res.push_back(pq.top());
        pq.pop();
    }
    return res;
}