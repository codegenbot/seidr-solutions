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
    int strongest = Strongest_Extension("Sp", extensions);
    assert (strongest == 1);  
    return 0;
}