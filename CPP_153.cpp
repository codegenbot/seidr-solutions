#include <iostream>
#include <vector>
#include <string>
#include <cassert>

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
    
    assert(Strongest_Extension({{"Sp", "671235"}}) == "Sp.671235");
    std::cout << Strongest_Extension({{"Sp", "671235"}}); 
    return 0;