
#include <iostream>
#include <vector>
#include <cctype>
#include <cassert>

std::string Strongest_Extension(const std::string &class_name, const std::vector<std::string> &extensions) {
    int CAP, SM, max_strength = -1;
    std::string strongest_extension = "";
    for (const std::string &ext : extensions) {
        CAP = SM = 0;
        for (char c : ext) {
            if (std::isupper(c)) CAP++;
            else if (std::islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}