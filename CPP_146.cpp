#include <vector>
#include <string>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string str = std::to_string(std::abs(num));
            if (str.front() % 2 != 0 && str.back() % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    // Sample test case
    std::vector<int> nums = {12, 25, -37, 48, -59};
    int result = specialFilter(nums);
    return 0;
}