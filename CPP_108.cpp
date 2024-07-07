int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!sign && digit == 5) {
                    sum += 5;
                } else if (!sign || digit < 5) {
                    sum += digit;
                }
                num /= 10;
                sign = !sign;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}