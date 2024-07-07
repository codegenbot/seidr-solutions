Here is the solution:

int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            num = -num; // Make all digits positive
        }
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        if (sum > 0)
            count++;
    }
    return count;
}