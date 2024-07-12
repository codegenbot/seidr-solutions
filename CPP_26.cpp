bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : unique(numbers.begin(), numbers.end())) {
        result.push_back(num);
    }
    return result;
}