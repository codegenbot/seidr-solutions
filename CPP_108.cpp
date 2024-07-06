int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0 && sum_of_digits(num) > 0) {
            count++;
        }
    }
    return count;
}

int sum_of_digits(int n) {
    int sum = 0;
    bool isNegative = false;
    if (n < 0) {
        isNegative = true;
        n = -n;
    }
    while (n > 0) {
        int digit = n % 10;
        if (isNegative && digit > 0) {
            break;
        }
        sum += digit;
        n /= 10;
    }
    return sum;
}