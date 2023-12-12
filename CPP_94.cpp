```
#include <vector>
#include <string>
#include <cassert>
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int j = 2; j < n; j++) {
        if (n % j == 0) return false;
    }
    return true;
}

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrime(vector<int> nums) {
    if (nums.empty()) {
        cout << "Input vector is empty." << endl;
        return -1;
    }
    int max = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max && isPrime(nums[i])) {
            max = nums[i];
        }
    }
    return sumDigits(max);
}

int main() {
    vector<int> nums = {127, 97, 8192};
    int result = largestPrime(nums);
    cout << "The largest prime number in the input vector is: " << result << endl;
    return 0;
}
```