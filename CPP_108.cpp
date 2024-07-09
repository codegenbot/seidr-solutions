int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num % 10);
                sum += digit;
                if (num < 0) negative = true;
                num /= 10;
            }
            if ((negative && sum > 0) || (!negative && sum > 0)) count++;
        } else {
            int sum = 0;
            bool negative = false;
            while (abs(num) != 0) {
                int digit = abs(abs(num) % 10);
                sum += (digit < 5 ? -1 * (num < 0 ? 1 : -1) : 1);
                num /= 10;
            }
            if ((negative && sum > 0) || (!negative && sum > 0)) count++;
        }
    }
    return count;
}