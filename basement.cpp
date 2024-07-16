#include <iostream>
using namespace std;

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {2,3,-2,4};
    int result = basement(nums);
    if(result == -1) {
        cout << "No such index found." << endl;
    } else {
        cout << "The first index is: " << result << endl;
    }
    return 0;