vector<int> maximum(vector<int> arr,int k){
    priority_queue<int> maxHeap;
    for(int num : arr) {
        maxHeap.push(num);
        if(maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    vector<int> result;
    while(maxHeap.size()) {
        result.push_back(maxHeap.top());
        maxHeap.pop();
    }
    return result;
}