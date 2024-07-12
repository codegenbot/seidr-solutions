#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int main() {
    std::string class_name;
    int num_extensions;

    std::cout << "Enter the class name: ";
    std::cin >> class_name;

    std::cout << "Enter the number of extensions: ";
    std::cin >> num_extensions;

    std::vector<std::string> extensions(num_extensions);

    for (int i = 0; i < num_extensions; ++i) {
        std::cout << "Enter extension " << i + 1 << ": ";
        std::cin >> extensions[i];
    }

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

    std::cout << "The strongest extension is: " << class_name + "." + result << std::endl;

    return 0;
}