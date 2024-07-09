#include <iostream>
#include <vector>
#include <algorithm>

std::string findLongestString(const std::vector<std::string>& inputStrings) {
    if(inputStrings.empty()) {
        return "";
    } else {
        std::string longest = *max_element(inputStrings.begin(), inputStrings.end(), 
            [](const string& a, const string& b) {return a.size() < b.size();});
        return longest;
    }
}

int main() {
    int numStrings;
    std::cin >> numStrings;

    std::vector<std::string> strings;
    for(int i = 0; i < numStrings; ++i) {
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }

    std::cout << findLongestString(strings);

    return 0;
}