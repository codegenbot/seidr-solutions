#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest = 0;
    std::string result = "";

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;

        for (char c : extension) {
            if (std::isupper(c)) cap++;
            else if (std::islower(c)) sm++;
        }

        int strength = cap - sm;

        if (strength > strongest) {
            strongest = strength;
            result = extension;
        }
    }

    return class_name + "." + result;
}

int main() {
    std::string class_name;
    std::vector<std::string> extensions;

    // Input from user
    std::cout << "Enter the class name: ";
    std::cin >> class_name;
    std::cout << "Enter the extensions (space separated): ";
    std::string input;
    std::getline(std::cin, input);
    for (const auto& ext : input.split(' ')) {
        extensions.push_back(ext);
    }

    // Print output
    int result = Strongest_Extension(class_name, extensions);

    std::cout << "The strongest extension is: " << result << std::endl;

    return 0;
}