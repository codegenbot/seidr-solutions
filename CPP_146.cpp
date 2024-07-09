```cpp
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
    vector<int> nums = {-101, -52, -31, 1, 21, 51, 100};
    cout << "The number of special numbers is: " << specialFilter(nums) << endl;
    return 0;
}