int search(vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        int count = 0;
        for (int n : lst) {
            if (n == num) {
                count++;
            }
        }
        if (num > count && count >= num) {
            result = max(result, num);
        }
    }
    return result;
}