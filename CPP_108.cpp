int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            bool negativeFound = false;
            while (num > 0 || (negativeFound && num < 0)) {
                int digit = num % 10;
                if (digit != 0) {
                    sum += digit;
                } else if (!negativeFound) {
                    negativeFound = true;
                }
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}