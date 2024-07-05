#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <climits>

std::string Strongest_Extension(const std::string& class_name, const std::vector<std::string>& extensions) {
    std::string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const auto& ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    std::string class_name;
    int num_extensions;
    std::cin >> class_name >> num_extensions;
    std::vector<std::string> extensions(num_extensions);
    for (int i = 0; i < num_extensions; ++i) {
        std::cin >> extensions[i];
    }
    std::cout << Strongest_Extension(class_name, extensions) << std::endl;
    return 0;
}