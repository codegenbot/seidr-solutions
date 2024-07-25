#include <iostream>
#include <string>
#include <vector>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for (const auto &extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
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
    std::string class_name = "Sp";
    std::vector<std::string> extensions = {"671235", "Bb"};
    std::cout << Strongest_Extension(class_name, extensions) << std::endl;
    return 0;
}