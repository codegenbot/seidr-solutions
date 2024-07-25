int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            for (long long temp = abs(num); temp > 0; temp /= 10) {
                int digit = temp % 10;
                if (sign || digit != 0) {
                    sum += digit;
                } else {
                    sign = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}