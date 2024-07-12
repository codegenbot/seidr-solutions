bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> unique_numbers;
    unordered_map<int, int> freq;
    for (int num : numbers) {
        freq[num]++;
    }
    for (auto pair : freq) {
        if (pair.second == 1) {
            unique_numbers.push_back(pair.first);
        }
    }
    return unique_numbers;
}