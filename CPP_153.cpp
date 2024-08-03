#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int Strongest_Extension(std::string class_name, const std::vector<std::string>& extensions) {
    int max_strength = 0;
    std::string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0;
        int sm = 0;

        for (char c : extension) {
            if (std::isupper(c)) {
                cap++;
            } else if (std::islower(c)) {
                sm++;
            }
        }

        int strength = cap - sm;

        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}