#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(std::string className, const std::initializer_list<std::string>& extensions) {
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
    std::cout << Strongest_Extension("Sp", {"671235", "Bb"}) << std::endl;
    return 0;
}