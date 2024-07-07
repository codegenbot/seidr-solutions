#include <iostream>
#include <string>
#include <vector>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest_strength = 0;
    std::string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = std::count(extension.begin(), extension.end(), std::toupper((char)extension[0]));
        int sm = extension.size() - cap;
        double strength = static_cast<double>(cap) - sm;

        if (strength > strongest_strength) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}