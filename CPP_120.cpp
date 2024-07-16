Here is the completed code:

```cpp
vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int num : arr) {
        pq.push(num);
    }
    vector<int> result(k);
    for (int i = 0; i < k; i++) {
        result[i] = pq.top();
        pq.pop();
    }
    return result;
}