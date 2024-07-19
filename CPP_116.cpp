bool issame(vector<int> a, vector<int> b) {
    int count_a = 0, count_b = 0;
    for (int num : a) {
        count_a += __builtin_popcount(num);
    }
    for (int num : b) {
        count_b += __builtin_popcount(num);
    }
    return count_a == count_b;
}