bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    deque<int> window;
    for (int i = 0; i < numbers.size(); ++i) {
        if (!window.empty() && window.front() == i - window.size()) {
            window.pop_front();
        }
        while (!window.empty() && numbers[window.back()] <= numbers[i]) {
            window.pop_back();
        }
        window.push_back(i);
        result.push_back(numbers[window.front()]);
    }
    return result;
}