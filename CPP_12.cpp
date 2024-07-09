#include <vector>
#include <algorithm>
#include <string>

std::string longestString(std::vector<std::string>& strings) {
    if(strings.empty()) {
        return "";
    } else {
        std::string longest = *max_element(strings.begin(), strings.end(),
            [](const std::string& a, const std::string& b) {return a.size() < b.size();});
        return longest;
    }
}

int main() {
    std::vector<std::string> inputStrings;
    // Your code to get the input strings here
    // For example:
    for(int i = 0; i < 5; i++) {
        std::string str;
        std::cin >> str;
        inputStrings.push_back(str);
    }
    
    std::cout << longestString(inputStrings) << std::endl;
    
    return 0;
}