vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq(arr.begin(), arr.end());
    vector<int> result;
    
    while (k--) {
        result.push_back(pq.top());
        pq.pop();
    }
    
    return result;
}