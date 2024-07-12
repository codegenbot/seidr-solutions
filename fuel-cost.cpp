#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums = {2819, 5392, 7741};

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += floor(nums[i] / 3.0) - 2;
    }

    cout << sum << endl;

    return 0;
}