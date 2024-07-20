int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            int temp = abs(num);
            while (temp != 0) {
                sum += temp % 10 * sign;
                temp /= 10;
                sign = -sign;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}