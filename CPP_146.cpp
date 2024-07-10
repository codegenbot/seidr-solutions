#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && to_string(abs(num)).back() % 2 != 0 && to_string(abs(num)).front() % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {11, -12, 13, -14};
    cout << specialFilter(nums);
    return 0;
}