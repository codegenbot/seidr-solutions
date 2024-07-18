bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result, max_vals;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        while (!max_vals.empty() && numbers[i] >= numbers[max_vals.back()]) {
            max_vals.pop_back();
        }
        max_vals.push_back(i);
        if (max_vals.front() == i - n) {
            max_vals.erase(max_vals.begin());
        }
        result.push_back(numbers[max_vals.front()]);
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 3, 5, 2, 6, 3, 7, 1};
    vector<int> expected = {5, 5, 6, 6, 7, 7, 7, 7};
    vector<int> result = rolling_max(numbers);
    cout << issame(result, expected) << endl;
    return 0;
}