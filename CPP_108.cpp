```cpp
#include <vector>
#include <iostream>

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 0) continue;
                if (negative) {
                    if (digit < 5) sum -= digit;
                    else sum += digit - 5;
                } else {
                    sum += digit;
                }
                num /= 10;
                negative = !negative;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}

int main() {
    vector<int> numbers = {123, 456, 789};
    int result = count_nums(numbers);
    cout << "The number of positive integers with sum greater than zero is: " << result << endl;
    return 0;
}