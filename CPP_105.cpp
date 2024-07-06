#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

std::vector<std::string> by_length(const std::vector<int>& arr) {
    std::map<int, std::string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                             {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    std::vector<std::string> result;
    for(int i : arr){
        if(i >= 1 && i <= 9)
            result.push_back(numToName[i]);
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n, x; 
    std::vector<int> numbers; 
    std::cout << "Enter the number of inputs: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter a number: ";
        std::cin >> x;
        numbers.push_back(x);
    }
    
    std::vector<std::string> result = by_length(numbers);

    bool sameLength = true;
    for (int i = 0; i < n-1 && sameLength; ++i) {
        if (result[i].size() != result[i+1].size()) {
            sameLength = false;
        }
    }

    std::cout << "Array by length: ";
    for(int i : result){
        std::cout << i << " ";
    }
    
    if (!issame(result, numbers)) {
        std::cout << "\n";
    } else {
        std::cout << "\nThe array is the same length.\n";
    }

    return 0;
}