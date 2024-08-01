```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(std::vector<std::string> a, std::vector<std::string>b){
    return (a == b);
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    std::vector<std::string> result;
    for (int num : nums) {
        switch (num) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {1,2,3};
    std::vector<std::string> output = by_length(arr);
    
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    
    if(isSame(output, {"One", "Two", "Three"})){
        std::cout << "Vectors are same" << std::endl;
    } else{
        std::cout << "Vectors are not same" << std::endl;
    }

    return 0;
}