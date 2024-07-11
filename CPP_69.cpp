int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    
    int max_val = -1;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->first > it->second && it->first > max_val) {
            max_val = it->first;
        }
    }
    
    return max_val;
}