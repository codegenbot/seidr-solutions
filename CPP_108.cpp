Here is the solution:

int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        bool hasPositiveSumOfDigits = false;
        if (num >= 0) {
            int sumOfDigits = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                sumOfDigits += digit;
                n /= 10;
            }
            hasPositiveSumOfDigits = sumOfDigits > 0;
        } else if (num < 0) {
            num = -num;
            int sumOfDigits = 0;
            int n = num;
            bool isNegative = true;
            while (n > 0) {
                int digit = n % 10;
                if (isNegative && digit != 0) {
                    hasPositiveSumOfDigits = true;
                    break;
                }
                sumOfDigits += digit;
                n /= 10;
                isNegative = false;
            }
        }
        if (hasPositiveSumOfDigits) count++;
    }
    return count;