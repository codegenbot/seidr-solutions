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
    vector<int> vec = {-5, -2, 3, -2, 0};
    cout << findFirstNegativeIndex(vec) << endl;
    return 0;
}