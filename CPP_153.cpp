#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int strongestExtension(std::string className, const std::vector<std::string>& extensions) {
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
    int strongest = strongestExtension("Sp", extensions);
    assert(std::to_string(strongest) == "1");
    return 0;
}