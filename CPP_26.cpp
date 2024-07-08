bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_set<int> unique_nums(numbers.begin(), numbers.end());
    return vector<int>(unique_nums.begin(), unique_nums.end());
}