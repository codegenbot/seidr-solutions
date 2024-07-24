int search(vector<int> lst) {
    map<int, int> freq;
    for (int num : lst) {
        if (!freq.count(num)) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }

    int max = -1;
    for (pair<int, int> p : freq) {
        if (p.second > 0 && p.second > 1) { 
            max = p.second; 
        }
    }

    return max;
}