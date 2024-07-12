```cpp
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

    std::cout << "Enter the list of extensions (space-separated): ";
    std::string temp;
    while(std::getline(std::cin, temp)) {
        if(temp.empty()) break;
        extensions.push_back(temp);
    }

    // Call the function and print output
    std::cout << "Strongest extension for class '" << Strongest_Extension(class_name, extensions) << "'" << std::endl;

    return 0;
}