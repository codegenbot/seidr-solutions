#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest = -1;
    string result = "";
    for (string extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            result = extension;
        } else if (strength == strongest) {
            result = (result <= extension) ? result : extension;
        }
    }
    return class_name + "." + result;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}