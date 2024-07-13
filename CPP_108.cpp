int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += (digit > 0) ? 1 : -1 * ((digit == -9) ? 0 : 1);
                temp /= 10;
            }
            if (sum > 0) count++;
        } else {
            num = -num; // convert negative number to positive
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += (digit > 0) ? 1 : -1 * ((digit == -9) ? 0 : 1);
                temp /= 10;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}