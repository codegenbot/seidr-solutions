int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            bool sign = false;
            while (num > 0 || (sign && num < 0)) {
                int digit = abs(num) % 10;
                sum += digit;
                num /= 10;
                if (!sign && num < 0) {
                    sign = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}