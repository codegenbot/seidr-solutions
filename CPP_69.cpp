int search(vector<int> lst) {
    for (int i = 0; i <= lst.size(); i++) {
        if (freq.find(i) != freq.end() && freq[i] >= i) {
            return i;
        }
    }
    return -1;
}