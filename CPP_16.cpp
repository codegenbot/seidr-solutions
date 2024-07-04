#include <iostream>
#include <set>
#include <string>
#include <cctype>

int count_distinct_characters(const std::string &str) { 
    std::set<char> distinct_chars;
    for(char c : str) {
        distinct_chars.insert(tolower(c));
    }
    return distinct_chars.size();
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << count_distinct_characters(input) << std::endl;
    return 0;
}