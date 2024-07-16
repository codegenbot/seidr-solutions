int search(vector<int> lst) {
    int res = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (freq >= num && num > res) {
            res = num;
        }
    }
    return res;
}