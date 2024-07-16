int search(vector<int> lst) {
    int max_num = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num > freq && freq >= max_num) {
            max_num = num;
        }
    }
    return max_num;
}