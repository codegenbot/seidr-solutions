```cpp
#include <iostream>
#include <string>
#include <vector>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int max_strength = 0;
    std::string strongest_extension;
    for (int i = 0; i < extensions.size(); i++) {
        int strength = 0;
        for (int j = 0; j < extensions[i].length(); j++) {
            if (isupper(extensions[i][j])) {
                strength++;
            } else if (islower(extensions[i][j])) {
                strength--;
            }
        }
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extensions[i];
        }
    }
    return class_name + "." + strongest_extension;
}
```