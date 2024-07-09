#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / abs(num)) % 10 % 2 != 0 || (abs(num) % 10) % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {-1, -11, -121, 111, 211};
    cout << "Count of filtered numbers is: " << specialFilter(nums);
    return 0;
}