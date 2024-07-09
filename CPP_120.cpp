```
vector<int> issame(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
    }
    vector<int> result;
    while (pq.size() > 1 && k--) {
        result.push_back(pq.top());
        pq.pop();
    }
    return result;
}