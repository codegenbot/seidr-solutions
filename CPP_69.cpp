int search(vector<int> lst) {
    int maxFreq = -1;
    int result = -1;
    
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > freq && freq > maxFreq) {
            maxFreq = freq;
            result = num;
        }
    }
    
    return result;
}