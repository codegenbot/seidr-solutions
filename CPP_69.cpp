int search(vector<int> lst) {
    int largestNum = -1;
    unordered_map<int, int> freq;

    for (int num : lst) {
        freq[num]++;
        if (num > largestNum && freq[num] >= num) {
            largestNum = num;
        }
    }

    return largestNum;
}