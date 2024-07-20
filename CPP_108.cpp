Here is the completed code:

int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        bool has_positive_sum = false;
        if (num < 0) {
            num = -num; // remove negative sign
        }
        while (num > 0) {
            int digit = num % 10;
            if (digit > 0) {
                has_positive_sum = true;
                break;
            }
            num /= 10;
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;
}