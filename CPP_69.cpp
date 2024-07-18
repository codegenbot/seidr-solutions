int search(vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int val : lst) {
            if (val == num) {
                freq++;
            }
        }
        if (freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}