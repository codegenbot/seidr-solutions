```cpp
#include <iostream>
#include <vector>
#include <limits>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension = "";
    int max_strength = std::numeric_limits<int>::min();

    for (std::string extension : extensions) {
        int cap_count = 0;
        int sm_count = 0;

        for (char ch : extension) {
            if (std::isupper(ch)) {
                cap_count++;
            } else if (std::islower(ch)) {
                sm_count++;
            }
        }

        int strength = cap_count - sm_count;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}
```