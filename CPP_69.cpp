int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) { 
            freq[num] = 1; 
        } else {
            freq[num]++;
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