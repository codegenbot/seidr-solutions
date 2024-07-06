int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            do {
                if (num < 0) {
                    negative = true;
                    num = -num;
                }
                sum += num % 10;
                num /= 10;
            } while (num != 0);
            if (!negative && sum > 0 || negative && sum >= 1) {
                count++;
            }
        }
    }
    return count;
}