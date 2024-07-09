#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int Strongest_Extension(std::string className, const std::vector<std::string>& extensions) {
    int strongest = 0;
    for (const auto& extension : extensions) {
        if (extension.find(className) != std::string::npos) {
            strongest = 1;
            break;
        }
    }
    return strongest;
}

int main() {
    std::string class_name;
    std::cout << "Enter the class name: ";
    std::cin >> class_name;

    std::vector<std::string> extensions;
    std::cout << "Enter the list of extensions (separated by space): ";
    std::string temp;
    while(std::cin >> temp) {
        extensions.push_back(temp);
    }

    std::cout << Strongest_Extension(class_name, extensions) << std::endl;

    return 0;
}