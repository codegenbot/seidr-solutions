int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int i = 0; i < lst.size(); ++i) {
        if (freq.find(lst[i]) == freq.end()) {
            freq[lst[i]] = i + 1;
        } else {
            freq[lst[i]]++;
        }
    }

    // Check if the first occurrence of each number is less than its frequency
    for (const auto& pair : freq) {
        if (pair.second >= pair.first && pair.first > 0) {
            return pair.first * pair.second;
        }
    }
    return -1;
}