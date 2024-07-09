int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        int sum = 0;
        if (num < 0) {
            while (num < 0) {
                num += 10;
            }
        }
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}