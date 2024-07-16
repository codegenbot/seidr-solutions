#include <vector>
using namespace std;

int basementIndex(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> testNums = {-1,-2,3};
    cout << basementIndex(testNums) << endl;
    return 0;
}