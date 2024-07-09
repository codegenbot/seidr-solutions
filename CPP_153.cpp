```cpp
#include <initializer_list>
#include <string>
#include <vector>
#include <ostream>

int Strongest_Extension(std::string className, const std::vector<std::string>& extensions) {
    int strongest = -1;
    for (const auto& extension : extensions) {
        if (extension.find(className) != std::string::npos && extension.length() > strongest) {
            strongest = extension.length();
        }
    }
    return strongest == -1 ? -1 : className + "." + extensions[0];
}

int main() {
    std::cout << Strongest_Extension("Sp", {"671235", "Bb"}) << std::endl;
}