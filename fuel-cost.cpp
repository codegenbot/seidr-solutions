#include <iostream>
#include <vector>

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
    for (long long num : nums) {
        sum += (num + 1) / 3 - 2;
    }

    cout << sum << "\n";

    return 0;
}