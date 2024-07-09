```
#include <iostream>
#include <vector>
#include <string>

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