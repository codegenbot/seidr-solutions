```cpp
#include <iostream>
#include <vector>

using namespace std;

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool negativeFound = false;
        if (num >= 0) {
            int sum = 0;
            while (num > 0 || (negativeFound && num < 0)) {
                int digit = num % 10;
                if ((digit > 1) || (digit == 1 && !negativeFound))
                    sum += digit;
                else
                    negativeFound = true;
                num /= 10;
            }
        } else {
            bool negSum = false;
            while (num < 0 || (negSum && num >= 0)) {
                int digit = abs(num) % 10 * (-1);
                if ((digit > -1) || (digit == -1 && !negSum))
                    sum += digit;
                else
                    negSum = true;
                num /= 10;
            }
        }
        if (sum > 0)
            count++;
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " integers separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums.push_back(i);
    }
    cout << "Numbers with odd digit sum: " << count_nums(nums) << endl;
    return 0;
}