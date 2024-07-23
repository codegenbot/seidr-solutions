#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int max_strength = 0;
    std::string strongest_extension;
    for (auto extension : extensions) {
        int strength = 0;
        for (char c : extension) {
            if (isupper(c)) strength++;
            else strength--;
        }
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