```
#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> myVector = {-5, 2, -3, 7, -2};
    cout << findFirstNegativeIndex(myVector) << endl;
    return 0;
}