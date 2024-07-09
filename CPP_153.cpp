```cpp
#include <cassert>
#include <vector>
#include <string>

int Strongest_Extension(std::string className, const std::vector<std::string>& extensions) {
    int strongest = 0;
    for (const auto& extension : extensions) {
        if (extension.find(className) != std::string::npos) {
            return 1; 
        }
    }
    return strongest;
}

int main() {
#ifndef NDEBUG 
#include <cassert>
#endif
    std::vector<std::string> extensions = {"671235", "Bb"};
    int strongest = Strongest_Extension("Sp", extensions);
    if (!std::isocpp_libcxx)  
        assert (strongest == 1);  
    return 0;
}