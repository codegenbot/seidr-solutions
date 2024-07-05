int sum_of_digits(int num) {
    int sum = 0;
    bool is_negative = (num < 0);
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return is_negative ? -sum : sum;
}

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (sum_of_digits(num) > 0) {
            count++;
        }
    }
    return count;
}