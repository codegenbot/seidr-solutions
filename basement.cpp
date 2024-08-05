```
#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> numbers = {-5, 3, 2, -4, 9, 6};
    cout << "First negative index is: " << findFirstNegativeIndex(numbers) << endl;
    return 0;
}