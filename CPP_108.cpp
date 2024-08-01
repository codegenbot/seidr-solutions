int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int absNum = abs(num);
            while (absNum > 0) {
                sum += absNum % 10;
                absNum /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0;
            int numAbs = abs(num);
            bool negativeFound = false;
            while (numAbs > 0) {
                int digit = numAbs % 10;
                if (digit < 0) {
                    negativeFound = true;
                    sum += -1 * (abs(digit));
                } else
                    sum += digit;
                numAbs /= 10;
            }
            if (!negativeFound || sum > 0)
                count++;
        }
    }
    return count;
}