#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 == 1 || (num % 10) % 2 == 1)) {
            count++;
        }
    }
    return count;

}

int main() {
    assert(specialFilter({}) == 0);
    vector<int> nums = {123, -456, 789};
    int result = specialFilter(nums);
    cout << "Result: " << result << endl;
    return 0;
}