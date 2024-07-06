#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::vector<std::string> by_length(std::vector<std::string> arr) {
    std::vector<std::string> sortedArr;
    for (const auto& str : arr){
        if(str.length() >= 1 && str.length() <= 9)
            sortedArr.push_back(str);
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    std::map<int, std::string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                             {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (const auto& str : sortedArr){
        int len = std::stoi(str);
        result.push_back(std::to_string(len) + " " + numToName[len] + "!"); 
    }
    return result;
}

int main() {
    std::vector<std::string> arr = {"one", "two", "five", "three", "four", "six", "eight", "seven"};
    std::vector<std::string> output = by_length(arr);
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    return 0;
}