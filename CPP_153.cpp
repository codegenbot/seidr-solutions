```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <limits>

std::string Strongest_Extension(const std::string& class_name, const std::vector<char>& extensions) {
    std::string strongest_extension = "";
    int max_strength = std::numeric_limits<int>::min();
    
    for (char extension : extensions) {
        int cap = 0;
        int sm = 0;
        if (isupper(extension)) {
            cap++;
        } else if (islower(extension)) {
            sm++;
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
    std::vector<char> extensions = {'6', '7', '1', '2', '3', '5', 'B', 'b'};
    assert(Strongest_Extension("Sp", extensions) == "Sp.671235");

    return 0;
}
```