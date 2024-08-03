#include <string>
#include <vector>
#include <cctype>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest = 0;
    std::string strongest_extension;

    for (std::string extension : extensions) {
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
            if (std::find(extensions.begin(), extensions.end(), extension) < std::find(extensions.begin(), extensions.end(), strongest_extension))
                strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}