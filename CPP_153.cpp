```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string Strongest_Extension(const std::pair<std::string, std::string>& extension) {
    if (extension.second.empty()) {
        return extension.first;
    } else {
        return extension.first + "." + std::to_string(extension.second);
    }
}

int main() {
    std::vector<std::pair<std::string, std::string>> extensions;
    std::pair<std::string, std::string> sp_pair = {"Sp", "671235"};
    std::pair<std::string, std::string> bb_pair = {"Bb", ""};
    extensions.push_back(sp_pair);
    extensions.push_back(bb_pair);

    assert(Strongest_Extension({{"Sp", "671235"}}) == "Sp.671235");
    for (const auto& extension : extensions) {
        std::cout << Strongest_Extension(extension) << std::endl; 
    }
}