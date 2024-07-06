```cpp
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<int> sortedArr;
    for(int i : arr){
        if(i >= 1 && i <= 9)
            sortedArr.push_back(i);
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    std::vector<std::string> result;
    map<int, string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                  {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for(int i : sortedArr){
        result.push_back(numToName[i]);
    }
    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(issame(by_length(arr), {"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One"})) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not the same" << std::endl;
    }
    return 0;
}