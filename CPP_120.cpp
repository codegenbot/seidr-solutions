Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int num : arr) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }
    vector<int> result;
    while (!pq.empty()) {
        result.push_back(pq.top());
        pq.pop();
    }
    return result;
}