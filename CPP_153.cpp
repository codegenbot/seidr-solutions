#include <vector>
#include <string>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest = -1;
    std::string result = "";
    for (std::string extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (std::isupper(c)) cap++;
            else if (std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            result = extension;
        } else if (strength == strongest) {
            result = (result.compare(extension) < 0 ? result : extension);
        }
    }
    return class_name + "." + result;
}