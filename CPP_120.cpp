Here is the solution:

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> maxHeap;
    for (int num : arr) {
        maxHeap.push(num);
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    vector<int> result(k);
    for (int i = k - 1; i >= 0; --i) {
        result[i] = maxHeap.top();
        maxHeap.pop();
    }
    return result;
}