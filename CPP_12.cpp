#include <algorithm>
#include <string>
#include <vector>

std::string findLongestString(std::vector<std::string>& strings) {
    if(strings.empty()) {
        return "";
    } else {
        std::string longest = *max_element(strings.begin(), strings.end(), 
            [](const string& a, const string& b) {return a.size() < b.size();});
        return longest;
    }
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "cherry"};
    std::cout << findLongestString(strings) << std::endl;
    return 0;
}