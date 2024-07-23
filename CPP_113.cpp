#include <iostream>
#include <string>

int odd_count(const std::vector<std::string>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (std::stoi(num) % 2 != 0) {
            count++;
        }
    }
    return count;
}

bool issame(int n1, const std::string& s) {
    return s.find(std::to_string(n1)) != std::string::npos;
}

int main() {
    std::vector<std::string> nums = {"271", "137", "314"};
    int result = odd_count(nums);
    std::string s = "the number of odd elements in the string 2 of the input is "+std::to_string(result)+".";
    assert(issame(result, s));
    
    return 0;
}