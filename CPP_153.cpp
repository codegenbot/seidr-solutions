#include <iostream>
#include <vector>
#include <string>

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
    std::vector<std::string> extensions = {"671235", "Bb"};
    int result = Strongest_Extension("Sp", extensions);
    if (result == 1)
        std::cout << "The strongest extension is Sp.671235" << std::endl;
    else
        std::cout << "No matching extension found" << std::endl;
    return 0;
}