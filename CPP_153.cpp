#include <string>
#include <vector>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest = -1;
    std::string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (std::isupper(c)) cap++;
            else if (std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            strongest_extension = extension;
        } else if (strength == strongest) {
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}