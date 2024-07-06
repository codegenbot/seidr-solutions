```cpp
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::vector<std::string> by_length(std::vector<std::string> arr) {
    std::vector<int> sortedArr;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i].size() >= 1 && arr[i].size() <= 9)
            sortedArr.push_back(arr[i].size());
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    std::vector<std::string> result;
    std::map<int, std::string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                             {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for(int i : sortedArr){
        result.push_back(std::to_string(i) + " " + numToName[i] + "!");
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