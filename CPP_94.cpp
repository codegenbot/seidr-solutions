#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

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
    assert(largestPrime(nums) == 10);
    cout << "The largest prime number is: " << largestPrime(nums) << endl;
    return 0;
}