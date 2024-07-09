int search(vector<int>& lst) {
    unordered_map<int, int> freq;
    int maxFrequency = -1;

    for (int num : lst) {
        freq[num]++;
        maxFrequency = max(maxFrequency, freq[num]);
    }

    for (auto& pair : freq) {
        if (pair.first > pair.second && pair.second > maxFrequency) {
            maxFrequency = pair.second;
        }
    }

    return maxFrequency > 0 ? maxFrequency : -1;
}