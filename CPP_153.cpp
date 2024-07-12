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
    extensions.push_back(std::make_pair("Sp", "671235")); 
    extensions.push_back(std::make_pair("Bb", ""));
    
    for (const auto& ext : extensions) {
        std::cout << Strongest_Extension(ext) << std::endl;
    }
    return 0;
}