#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
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