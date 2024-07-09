int search(vector<int> lst) {
    map<int, int> frequency;
    for (int num : lst) {
        if (!frequency.count(num)) {
            frequency[num] = 1;
        } else {
            frequency[num]++;
        }
    }
    for (auto p : frequency) {
        if (p.second >= p.first && p.first > 0) {
            return p.first;
        }
    }
    return -1;
}