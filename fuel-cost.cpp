#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<unsigned long long> nums = {2819, 5392, 7741};

    unsigned long long sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += floor(nums[i] / 3) - 2;
    }

    cout << sum << endl;

    return 0;
}