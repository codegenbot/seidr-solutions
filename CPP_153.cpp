```cpp
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest_strength = 0;
    std::string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = extension.size() - cap;
        double strength = static_cast<double>(cap) - sm;

        if (strength > strongest_strength) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    std::vector<std::string> extensions = {"com", "org", "net"};
    std::string class_name = "test";

    std::cout << Strongest_Extension(class_name, extensions) << std::endl;

    return 0;
}