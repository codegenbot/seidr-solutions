int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            bool hasNegativeDigit = false;
            long absNum = labs(num);
            while (absNum > 0) {
                int digit = absNum % 10;
                if (digit < 0) hasNegativeDigit = true;
                else if (digit > 0) count++;
                absNum /= 10;
            }
            if (!hasNegativeDigit) count++;
        } else {
            bool hasPositiveDigit = false;
            long absNum = labs(num);
            while (absNum > 0) {
                int digit = absNum % 10;
                if (digit < 0) {
                    if (!hasPositiveDigit) count++;
                    break;
                } else if (digit > 0) hasPositiveDigit = true;
                absNum /= 10;
            }
        }
    }
    return count;
}