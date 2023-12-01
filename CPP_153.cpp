#include <iostream>
#include <vector>
#include <string>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension = "";
    int strength = 0;

    for (const auto& extension : extensions) {
        int cap_letters = 0;
        int lowercase_letters = 0;
        for (auto c : extension) {
            if (isupper(c)) {
                cap_letters++;
            } else if (islower(c)) {
                lowercase_letters++;
            }
        }
        int current_strength = cap_letters - lowercase_letters;
        if (current_strength > strength) {
            strongest_extension = extension;
            strength = current_strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}

int main() {
    std::string class_name;
    std::cout << "Enter the name of the class: ";
    std::cin >> class_name;

    std::vector<std::string> extensions;
    std::cout << "Enter the extensions (separated by spaces): ";
    std::string extension;
    while (std::cin >> extension) {
        extensions.push_back(extension);
    }

    std::string strongest_extension = Strongest_Extension(class_name, extensions);
    std::cout << "Strongest extension: " << strongest_extension << std::endl;

    return 0;
}