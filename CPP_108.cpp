int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0;
            int temp = -num;
            bool isNegative = true;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (isNegative && sum <= 0 || !isNegative && sum > 0)
                count++;
        }
    }
    return count;
}