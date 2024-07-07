int search(vector<int> lst) {
    int max = 0;
    for (int num : lst) {
        if (num > 0 && num >= max) {
            max = num;
        }
    }
    for (int i = 1; i <= max; i++) {
        int count = 0;
        for (int num : lst) {
            if (i == num) {
                count++;
            }
        }
        if (count >= i) {
            return i;
        }
    }
    return -1;
}