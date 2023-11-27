#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int count_distinct_characters(std::string str) {
    std::vector<char> distinctChars;
    for (char c : str) {
        char lowerC = tolower(c);
        if (std::find(distinctChars.begin(), distinctChars.end(), lowerC) == distinctChars.end()) {
            distinctChars.push_back(lowerC);
        }
    }
    return distinctChars.size();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    int distinctCount = count_distinct_characters(input);
    std::cout << "Number of distinct characters: " << distinctCount << std::endl;
    return 0;
}