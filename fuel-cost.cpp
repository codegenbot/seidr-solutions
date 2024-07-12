#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {2819, 5392, 7741};

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += (nums[i] - 2) / 3;
    }

    cout << sum << endl;

    return 0;
}