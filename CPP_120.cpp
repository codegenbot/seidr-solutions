Here is the solution:

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
        if (pq.size() > k) {
            pq.pop();
        }
    }
    vector<int> result(k);
    while (!pq.empty()) {
        result[k - 1] = pq.top();
        pq.pop();
        k--;
    }
    reverse(result.begin(), result.end());
    return result;