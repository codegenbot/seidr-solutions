```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
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
        std::getline(std::cin, strings[i]);
    }

    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;

    std::vector<std::string> filtered = filter_by_prefix(strings, prefix);

    if (filtered.size() == 0) {
        std::cout << "No strings found with given prefix.\n";
    } else {
        std::cout << "Strings with the given prefix are: ";
        for (const auto& str : filtered) {
            std::cout << str << " ";
        }
        std::cout << "\n";
    }

    return 0;
}