```cpp
#include <iostream>
#include <map>
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
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    
    auto hist = histogram(input);
    bool isSame = true;

    if (input.size() > 1) {
        for (int i = 0; i < input.size() - 1; ++i) {
            if (std::tolower(input[i]) == std::tolower(input[i + 1])) {
                isSame = false;
                break;
            }
        }
    }

    if (isSame) {
        for (const auto& pair : hist) {
            for (int i = 0; i < pair.second - 1; ++i) {
                std::cout << " ";
            }
            for (int i = 0; i < pair.second; ++i) {
                if (i == pair.second - 1)
                    std::cout << pair.first;
                else
                    std::cout << pair.first << " ";
            }
            std::cout << '\n';
        }
    } else {
        for (const auto& pair : hist) {
            for (int i = 0; i < pair.second - 1; ++i) {
                std::cout << " ";
            }
            for (int i = 0; i < pair.second; ++i) {
                if (i == pair.second - 1)
                    std::cout << tolower(pair.first);
                else
                    std::cout << tolower(pair.first) << " ";
            }
            std::cout << '\n';
        }
    }

    return 0;
}