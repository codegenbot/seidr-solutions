```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin.ignore();
        getline(std::cin, strings[i]);
    }

    int m;
    std::cout << "Enter the number of substrings: ";
    std::cin >> m;

    std::vector<std::string> substrings(m);

    for (int i = 0; i < m; ++i) {
        std::cout << "Enter substring " << i + 1 << ": ";
        getline(std::cin, substrings[i]);
    }

    for (const auto& str : strings) {
        bool found = false;
        for (const auto& sub : substrings) {
            if(filter_by_substring({str}, sub).size() > 0) {
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "String: " << str << " is not present in any substring." << std::endl;
        }
    }

    return 0;
}