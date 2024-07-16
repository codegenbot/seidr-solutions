int search(vector<int> lst) {
    int maxFreqValue = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq && freq >= maxFreqValue) {
            maxFreqValue = num;
        }
    }
    return maxFreqValue;
}