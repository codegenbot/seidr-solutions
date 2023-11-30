int search(vector<int> lst) {
    int maxFreq = -1;
    for (int num : lst) {
        int freq = 0;
        for (int i = 0; i < lst.size(); i++) {
            if (lst[i] == num) {
                freq++;
            }
        }
        if (freq >= num && num > maxFreq) {
            maxFreq = num;
        }
    }
    return maxFreq;
}