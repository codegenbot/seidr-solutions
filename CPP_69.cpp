int search(const vector<int>& lst) {
    int maxFrequency = -1;
    for (int num : lst) {
        int frequency = count(lst.begin(), lst.end(), num);
        if (num == frequency && frequency > maxFrequency) {
            maxFrequency = frequency;
        }
    }
    return maxFrequency;
}