```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <limits>

std::string Strongest_Extension(const std::string& class_name, const std::vector<std::string>& extensions) {
    std::string strongest_extension = "";
    int max_strength = std::numeric_limits<int>::min();
    
    for (const std::string& extension : extensions) {
        int cap = 0;
        int sm = 0;
        for (char c : extension) {
            if (isupper(c)) {
                cap++;
            } else if (islower(c)) {
                sm++;
            }
        }
        int strength = cap - sm;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}

int main() {
    std::vector<std::string> extensions = { "671235", "Bb" }; 
    assert(Strongest_Extension("Sp", extensions) == "Sp.671235");

    return 0;
}
```