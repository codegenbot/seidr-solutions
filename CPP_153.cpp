```cpp
#include <initializer_list>

#include <cassert>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

std::vector<std::pair<std::string, std::string>> extensions;

int compare(const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
    return a.second.size() - b.second.size();
}

std::string Strongest_Extension(const std::string& type, const std::vector<std::string>& strong) {
    auto max_str = *std::max_element(strong.begin(), strong.end());
    extensions.push_back({type, max_str});
    return type + "." + max_str;
}

int main() {
    std::string type;
    std::cout << "Enter the type: ";
    std::cin >> type;

    std::vector<std::string> strong;
    std::cout << "Enter the number of extensions (0 to finish): ";
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter extension: ";
        std::cin >> s;
        strong.push_back(s);
    }

    std::cout << Strongest_Extension(type, strong) << std::endl;

    return 0;
}