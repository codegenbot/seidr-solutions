```cpp
#include <initializer_list>
#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(std::string className, const std::vector<std::string>& extensions) {
    int strongest = -1;
    for (const auto& extension : extensions) {
        if (extension.find(className) != std::string::npos && extension.length() > strongest) {
            strongest = extension.length();
        }
    }
    return strongest == -1 ? 0 : className + "." + extensions[0];
}

int main() {
    int result = Strongest_Extension("Sp", {"671235", "Bb"});
    std::cout << "Result: " << (result > 0 ? "Strongest Extension exists" : "No strongest extension") << std::endl;
}