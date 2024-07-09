```
#include <iostream>
#include <vector>
#include <algorithm>

std::string longestString(const std::vector<std::string>& strings) {
    if(strings.empty()) {
        return "";
    } else {
        string longest = *max_element(strings.begin(), strings.end(),
            [](const string& a, const string& b) {return a.size() < b.size();});
        return longest;
    }
}

int main() {
    std::vector<std::string> strVec;
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, s);
        strVec.push_back(s);
    }

    std::cout << "The longest string is: " << longestString(strVec) << std::endl;

    return 0;
}