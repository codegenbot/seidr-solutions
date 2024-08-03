#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 != 0 || num % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    int nums[] = {12, 34, 56};
    vector<int> vec(nums, nums + sizeof(nums) / sizeof(nums[0]));
    cout << specialFilter(vec) << endl;
    return 0;
}