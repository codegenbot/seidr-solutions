#include <iostream>
#include <map>
#include <cctype>
#include <string>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b.at(pair.first) != pair.second) {
            return false;
        }
    }
    return true;

}

std::map<char, int> histogram(const std::string& str) {
    std::map<char, int> result;

    for (char c : str) {
        if (!isalpha(c)) continue; 
        char lower = tolower(c);
        if (result.find(lower) == result.end()) {
            result[lower] = 1;
        } else {
            result[lower]++;
        }
    }

    return result;

}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    std::map<char, int> h = histogram(str);

    if (h.size() > 0) {
        for (const auto& pair : h) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    } else {
        std::cout << "No letters found" << std::endl;
    }

    return 0;

}