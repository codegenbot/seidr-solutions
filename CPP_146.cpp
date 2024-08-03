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
    // add your test cases here
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Number of special numbers: " << specialFilter(nums) << endl;
    return 0;
}