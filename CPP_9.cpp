bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    deque<int> q;
    vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        while (!q.empty() && q.front() < i - 2) {
            q.pop_front();
        }
        while (!q.empty() && numbers[q.back()] < numbers[i]) {
            q.pop_back();
        }
        q.push_back(i);
        if (i >= 2) {
            result.push_back(numbers[q.front()]);
        }
    }
    return result;
}