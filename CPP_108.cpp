Here is the solution:

```cpp
int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool sign = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!sign && digit > 5) {
                    sign = true;
                    digit -= 9;
                }
                num /= 10;
                sum += digit;
            }
            if (sum > 0) count++;
        } else if (num < 0) {
            int sum = 0;
            bool sign = true;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (!sign && digit > 5) {
                    sign = false;
                    digit -= 9;
                }
                num /= 10;
                sum += digit;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}