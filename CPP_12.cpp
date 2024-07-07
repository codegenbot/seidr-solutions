```c++
#include <iostream>
#include <vector>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(auto s : strings) {
        if(s.length() > result.length()) result = s;
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"hello", "world", "abc"};
    std::cout << longest(strings) << std::endl;
    return 0;
}