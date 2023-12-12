```cpp
#include <iostream>
#include <string>
#include <vector>

int Strongest_Extension(const char* class_name, std::vector<const char*> extensions) {
    int max_strength = 0;
    const char* strongest_extension;
    for (int i = 0; i < extensions.size(); i++) {
        int strength = 0;
        for (int j = 0; j < strlen(extensions[i]); j++) {
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