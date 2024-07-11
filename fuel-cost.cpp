#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n || !cin.eof()) {
        if (cin.fail()) {
            break;
        }
        nums.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i] / 3 - 2;
    }

    cout << sum << "\n";

    return 0;
}