int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        bool negative = false;
        if (num < 0) {
            negative = true;
            num = -num;
        }
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if ((negative && sum > 0) || (!negative && sum >= 1)) {
            count++;
        }
    }
    return count;
}