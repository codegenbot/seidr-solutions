#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int64_t> nums) {
    int64_t sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i + 1;
        }
    }
    return nums.size();
}

int main() {
    vector<int64_t> test_input = {16, 43, 73, 2, 40, -46, 38, -6, -80, 53, 96, -55, -42, -6, -49, -93, -69};
    cout << basement(test_input) << endl;
    return 0;
}