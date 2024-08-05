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
    return -1; // or any other default value you want to return
}

int main() {
    vector<int> input = {1,-2,3,10,4,-5,100};
    int result = findFirstNegativeIndex(input);
    cout << "First negative index is: " << result << endl;
    return 0;
}