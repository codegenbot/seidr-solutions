vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> maxHeap;
    
    for (int i : arr) {
        maxHeap.push(i);
        
        if (maxHeap.size() > k)
            maxHeap.pop();
    }
    
    vector<int> result;
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top());
        maxHeap.pop();
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}