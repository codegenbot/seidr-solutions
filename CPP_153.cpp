```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int main() {
    std::string class_name = "Sp";
    std::vector<std::string> extensions = {"671235", "Bb"};
    std::cout << Strongest_Extension(class_name, extensions) << std::endl;
    return 0;
}

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest_strength = 0;
    string strongest_extension;

    for (auto extension : extensions) {
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

        if (strength > strongest_strength) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}