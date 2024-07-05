int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        bool first_digit = true;
        while (num != 0) {
            int digit = num % 10;
            if (first_digit && num < 0) {
                sum += digit; // add the signed first digit
                first_digit = false;
            } else {
                sum += abs(digit);
            }
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}