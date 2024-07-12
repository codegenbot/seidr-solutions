#include <iostream>
#include <string>

bool is_nested(const std::string& str) {
    int count = 0;
    for(char c : str) {
        if(c == '[') {
            count++;
        } else if(c == ']' && count > 0) {
            count--;
        }
    }
    return count < str.length() && count > 0;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << is_nested(str) << std::endl;

    return 0;
}