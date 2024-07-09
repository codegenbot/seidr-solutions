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
    vector<int> nums = {100, -20, 15, -50};
    cout << "Number of elements that satisfy the condition: " << specialFilter(nums) << endl;
    return 0;
}