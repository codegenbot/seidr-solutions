int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; // Convert to positive
            int sum = 0;
            bool negativeFound = false;
            while (num > 0) {
                if (!negativeFound && num % 10 < 0) {
                    negativeFound = true;
                }
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0 || negativeFound) {
                count++;
            }
        }
    }
    return count;
}