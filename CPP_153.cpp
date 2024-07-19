#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int max_strength = -1;
    std::string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (std::isupper(c)) cap++;
            else if (std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        } else if (strength == max_strength) {
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    std::string class_name;
    int n;
    std::cout << "Enter the number of extensions: ";
    std::cin >> n;
    
    std::vector<std::string> extensions(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter extension " << i + 1 << ": ";
        std::cin >> extensions[i];
    }

    std::cout << "The strongest extension is: " << Strongest_Extension(class_name, extensions) << std::endl;
    
    return 0;
}