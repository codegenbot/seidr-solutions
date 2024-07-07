Here is the solution:

int count_nums(vector<int> n){
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            while (num != 0) {
                int digit = num % 10;
                if (!sign && digit < 0) {
                    sign = true;
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else if (num < 0) {
            int sum = 0;
            bool sign = true;
            while (num != 0) {
                int digit = abs(num % 10);
                if (!sign && digit > 0) {
                    sign = false;
                }
                sum += sign ? -digit : digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}