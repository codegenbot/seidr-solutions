int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        int sum = 0;
        bool sign = true;
        if (num < 0) {
            sign = false;
            num = -num;
        }
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if ((sign && sum > 0) || (!sign && sum >= 1)) {
            count++;
        }
    }
    return count;
}