#include <cassert>
#include <vector>

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        std::string numStr = std::to_string(num);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.size()-1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    // Test cases
    std::vector<int> nums1 = {12, 23, 34, 45, 56};
    assert(specialFilter(nums1) == 3);

    std::vector<int> nums2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    assert(specialFilter(nums2) == 0);

    std::vector<int> nums3 = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    assert(specialFilter(nums3) == 0);

    return 0;
}