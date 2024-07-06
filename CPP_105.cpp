```cpp
#include <iostream>
#include <vector>
#include <map>

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
    std::map<int, std::string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                            {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for(int i : sortedArr){
        result.push_back(numToName[i]);
    }
    return result;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter integer: ";
        std::cin >> x;
        input.push_back(x);
    }
    
    std::vector<std::string> output = by_length(input);
    
    if(issame(output, {"Eight", "Five", "Nine"})) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }
    
    return 0;
}