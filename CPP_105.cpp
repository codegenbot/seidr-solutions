#include <vector>
#include <string>
#include <algorithm>

bool compare(const std::string& str1, const std::string& str2) {
    return str1 == str2;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> nums;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            nums.push_back(i);
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    std::vector<std::string> result;
    for (int num : nums) {
        std::string str = "";
        switch (num) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<int> arr = {9, 4, 8};
    std::vector<std::string> result = by_length(arr);
    if (result == {"Nine", "Eight", "Four"}) {
        std::cout << "The result is same." << std::endl;
    }
}