#include <algorithm>
#include <vector>
#include <string>
#include <memory>
#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(std::to_string(num));
        }
    }

    std::sort(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.end());

    std::vector<std::string> result;
    for (std::string str : nums) {
        if (str == "1") str = "One";
        else if (str == "2") str = "Two";
        else if (str == "3") str = "Three";
        else if (str == "4") str = "Four";
        else if (str == "5") str = "Five";
        else if (str == "6") str = "Six";
        else if (str == "7") str = "Seven";
        else if (str == "8") str = "Eight";
        else if (str == "9") str = "Nine";
        result.push_back(str);
    }

    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        std::cout << "Enter integer " << i+1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }
    std::vector<std::string> output = by_length(arr);
    std::cout << "The numbers in the order of their lengths are: ";
    for (std::string str : output) {
        std::cout << str << " ";
    }
    std::cout << "\n";
    return 0;
}