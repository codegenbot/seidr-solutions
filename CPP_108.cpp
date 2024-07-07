int count_nums(vector<int> v) {
    int count = 0;
    for (auto num : v) {
        bool hasPositiveSum = false;
        if (num < 0) {
            num = -num;
        }
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 || num / 10 == 0) {
                hasPositiveSum = true;
                break;
            }
            num /= 10;
        }
        if (hasPositiveSum) {
            count++;
        }
    }
    return count;
}