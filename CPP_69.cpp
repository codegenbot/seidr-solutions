int search(vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && num <= count(num)) {
            max = num;
        }
    }
    return max;
}

int count(int num) {
    int freq = 0;
    for (auto x : lst) {
        if (x == num) {
            freq++;
        }
    }
    return freq;
}