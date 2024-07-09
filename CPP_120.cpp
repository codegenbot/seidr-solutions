Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> maxHeap;

    for (int num : arr) {
        maxHeap.push(num);
    }

    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(maxHeap.top());
        maxHeap.pop();
    }
    return result;
}