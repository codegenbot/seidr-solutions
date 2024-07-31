vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq(arr.begin(), arr.end());
    vector<int> result;
    
    for (int i = 0; i < k; i++) {
        result.push_back(pq.top());
        pq.pop();
    }
    
    return result;
}