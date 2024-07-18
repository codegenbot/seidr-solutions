vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    deque<int> q;
    for (int i = 0; i < n; ++i) {
        while (!q.empty() && q.front() < i) {
            q.pop_front();
        }
        while (!q.empty() && numbers[q.back()] < numbers[i]) {
            q.pop_back();
        }
        q.push_back(i);
        result.push_back(numbers[q.front()]);
    }
    return result;
}