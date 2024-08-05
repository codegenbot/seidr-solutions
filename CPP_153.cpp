#include <iostream>
#include <vector>
#include <algorithm>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension = extensions[0];
    int max_strength = std::count_if(strongest_extension.begin(), strongest_extension.end(), ::isupper) - std::count_if(strongest_extension.begin(), strongest_extension.end(), ::islower);
    
    for (const auto& extension : extensions) {
        int strength = std::count_if(extension.begin(), extension.end(), ::isupper) - std::count_if(extension.begin(), extension.end(), ::islower);
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}

int main() {
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");

    return 0;
}