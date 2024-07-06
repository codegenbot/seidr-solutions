vector<int> maximum(vector<int> arr,int k){
    priority_queue<int> max_heap;
    for(int i:arr) {
        max_heap.push(i);
        if(max_heap.size()>k)
            max_heap.pop();
    }
    vector<int> result;
    while(!max_heap.empty()) {
        result.push_back(max_heap.top());
        max_heap.pop();
    }
    return result;
}