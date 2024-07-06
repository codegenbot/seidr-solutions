```cpp
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> sortedArr;
    for(int i : arr){
        if(i >= 1 && i <= 9)
            sortedArr.push_back(i);
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    std::vector<std::string> result;
    std::map<int, std::string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                             {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for(int i : sortedArr){
        result.push_back(numToName[i]);
    }
    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 5, 3, 4, 6, 8, 7};
    std::vector<std::string> output = by_length(arr);
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    return 0;
}