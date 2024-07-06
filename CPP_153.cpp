```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest = 0;
    std::string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (std::isupper(c)) cap++;
            else if (std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest || (strength == strongest && extension < strongest_extension)) {
            strongest = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    std::string class_name;
    std::vector<std::string> extensions;
    
    // get user input
    std::cout << "Enter the class name: ";
    std::cin >> class_name;

    int num_extensions;
    std::cout << "Enter number of extensions: ";
    std::cin >> num_extensions;

    for (int i = 0; i < num_extensions; i++) {
        std::string extension;
        std::cout << "Enter extension " << i + 1 << ": ";
        std::cin >> extension;
        extensions.push_back(extension);
    }

    // print the strongest extension
    std::cout << "The strongest extension is: " << Strongest_Extension(class_name, extensions) << std::endl;

    return 0;
}