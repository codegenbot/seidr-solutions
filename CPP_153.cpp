#include <iostream>
#include <string>
#include <vector>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest_strength = 0;
    std::string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = extension.size() - cap;
        double strength = static_cast<double>(cap) - sm;

        if (strength > strongest_strength) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    std::string class_name;
    int num_extensions;
    std::vector<std::string> extensions;

    // Read input from user
    std::cout << "Enter the name of the class: ";
    std::cin >> class_name;
    std::cout << "Enter the number of extensions: ";
    std::cin >> num_extensions;

    for (int i = 0; i < num_extensions; ++i) {
        std::string extension;
        std::cout << "Enter extension " << i + 1 << ": ";
        std::cin >> extension;
        extensions.push_back(extension);
    }

    // Calculate and print the strongest extension
    std::cout << Strongest_Extension(class_name, extensions);

    return 0;
}