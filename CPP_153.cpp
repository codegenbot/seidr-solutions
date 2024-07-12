```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest = 0;
    std::string result = "";

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;

        for (char c : extension) {
            if (std::isupper(c)) cap++;
            else if (std::islower(c)) sm++;
        }

        int strength = cap - sm;

        if (strength > strongest) {
            strongest = strength;
            result = extension;
        }
    }

    return class_name + "." + result;
}

int main() {
    std::vector<std::string> extensions = {"test1", "Test2", "test3", "TEST4"};
    std::string className = "MyClass";
    
    int res = Strongest_Extension(className, extensions);
    std::cout << "The strongest extension for class " << className << " is: " << res << "\n";
    return 0;
}