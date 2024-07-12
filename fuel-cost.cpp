#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {12, 15, 18, 21}; // Example input vector

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += (nums[i] / 3) - 2;
    }

    cout << sum << endl;

    return 0;
}