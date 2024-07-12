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

    // Read input from user
    std::cout << "Enter the class name: ";
    std::cin >> class_name;
    std::cout << "Enter the list of extensions (separated by spaces): ";
    std::getline(std::cin, class_name);
    size_t pos = 0;
    while ((pos = class_name.find(' ')) != std::string::npos) {
        extensions.push_back(class_name.substr(0, pos));
        class_name.erase(0, pos + 1);
    }
    if (!class_name.empty()) {
        extensions.push_back(class_name);
    }

    // Calculate and print the strongest extension
    int result = Strongest_Extension(class_name, extensions);

    std::cout << "The strongest extension is: " << result << std::endl;

    return 0;
}