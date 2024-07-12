```cpp
#include <iostream>
#include <vector>
#include <string>

std::string Strongest_Extension(const std::pair<std::string, std::string>& extension) {
    if (extension.second.empty()) {
        return extension.first;
    } else {
        return extension.first + "." + extension.second;
    }
}

int main() {
    std::vector<std::pair<std::string, std::string>> extensions; 
    extensions.push_back({{"Sp", "671235"}}); // Added a space after the number for formatting purposes.
    extensions.push_back({"Bb", ""});

    for (const auto& extension : extensions) {
        if (!extension.second.empty()) { 
            std::cout << Strongest_Extension(extension) << std::endl; 
        } else {
            std::cout << Strongest_Extension(extension) << std::endl;
        }
    }
}