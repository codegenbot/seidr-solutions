#include <vector>
#include <string>
#include <cassert>
#include <iostream>
using namespace std;

int largestPrime(vector<int> nums);

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (std::size_t i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    assert(largestPrime(nums) == 10);
    return 0;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int j = 2; j < n; j++) {
        if (n % j == 0) return false;
    }
    return true;
}

int largestPrime(vector<int> nums) {
    int max = 0;
    for (std::size_t i = 0; i < nums.size(); i++) {
        if (nums[i] > max && isPrime(nums[i])) {
            max = nums[i];
        }
    }
    return max;
}