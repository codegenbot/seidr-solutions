```cpp
#include <initializer_list>
#include <iostream>
#include <vector>

int main() {
    std::cout << Strongest_Extension("Sp", std::vector<std::string>{"671235", "Bb"}) << std::endl;
}

int Strongest_Extension(std::string className, const std::vector<std::string>& extensions) {
    int strongest = -1;
    for (const auto& extension : extensions) {
        if (extension.find(className) != std::string::npos && extension.length() > strongest) {
            strongest = extension.length();
        }
    }
    return strongest == -1 ? -1 : className + "." + extensions[0];
}