bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    deque<pair<int, int>> window;
  
    for (int i = 0; i < numbers.size(); ++i) {
        while (!window.empty() && window.back().first <= numbers[i]) {
            window.pop_back();
        }
        window.emplace_back(numbers[i], i);
        while (!window.empty() && window.front().second <= i - window_size) {
            window.pop_front();
        }
        result.push_back(window.front().first);
    }
    return result;
}