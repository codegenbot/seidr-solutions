#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n || !cin.eof()) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += std::max(num / 3 - 2, 0);
    }

    cout << sum << "\n";

    return 0;
}