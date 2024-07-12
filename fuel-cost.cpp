#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<long long> nums;
    long long n;
    while (cin >> n) {
        nums.push_back(n);
        if (cin.peek() == '\n') {
            break;
        }
    }

    long long sum = 0;
    for (double num : nums) {
        sum += floor(num / 3) - 2;
    }

    cout << sum << "\n";

    return 0;
}