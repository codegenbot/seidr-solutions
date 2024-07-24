#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {12, 34, 45, 56};
    cout << "Number of special numbers in the array: " << specialFilter(nums) << endl;
    return 0;
}