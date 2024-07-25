Here is the completed code:

int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0;
            int temp = -num;
            bool isNegative = false;
            while (temp > 0) {
                if (!isNegative && temp % 10 < 0) {
                    isNegative = true;
                    sum -= temp % 10;
                } else {
                    sum += temp % 10;
                }
                temp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}