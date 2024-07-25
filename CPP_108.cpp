Here is the completed code:

int count_nums(vector<int> n) {
    int count = 0;
    for (auto num : n) {
        bool has_positive_sum = false;
        if (num < 0) {
            num = -num;
        }
        while (num > 0) {
            if (num % 10 != 0) {
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