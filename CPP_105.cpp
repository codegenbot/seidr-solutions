#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a==b) return true;
    else return false;
}

std::vector<std::string> by_length(std::vector<int> arr) {
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
    int num;
    std::cout << "Enter the number of inputs: ";
    std::cin >> num;

    for(int i = 0; i < num; i++) {
        int input;
        std::cout << "Enter a number (1-9): ";
        std::cin >> input;

        if(input >= 1 && input <= 9) {
            bool same = issame(by_length({input}), by_length({input}));
            if(same)
                std::cout << "The string is the same.\n";
            else
                std::cout << "The strings are different.\n";
        }
    }

    return 0;
}