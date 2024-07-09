#include <vector>

int basement(std::vector<int> nums) {
    int runningSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        runningSum += nums[i];
        if (runningSum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {2,3,-2,4};
    int result = basement(nums);
    if(result != -1) {
        std::cout << "First index where sum becomes negative is: " << result << endl;
    } else {
        std::cout << "No such index found." << endl;
    }
    return 0;
}