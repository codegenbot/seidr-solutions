#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> nums = {2819, 5392, 7741};

    unsigned long long sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += static_cast<unsigned long long>(nums[i] / 3) - 2;
    }

    cout << sum << endl;

    return 0;
}