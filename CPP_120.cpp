Here is the solution:

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> max_heap;
    for (int num : arr) {
        max_heap.push(num);
        if (max_heap.size() > k) {
            max_heap.pop();
        }
    }
    vector<int> result(k);
    for (int i = k - 1; i >= 0; --i) {
        result[i] = max_heap.top();
        max_heap.pop();
    }
    return result;
}