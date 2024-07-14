#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += (floor(nums[i] / 3.0) - 2);
    }

    cout << sum;

    return 0;
}