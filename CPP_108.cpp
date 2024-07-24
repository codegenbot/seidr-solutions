int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0, i = 1;
            while (i <= abs(num)) {
                sum += (num / i) % 10;
                i *= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, i = 1;
            do {
                if ((num / i) % 10 < 0) {
                    sum -= (num / i) % 10;
                } else {
                    sum += (num / i) % 10;
                }
                i *= 10;
                num /= abs(i);
            } while (i != 0 && num != 0);
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}