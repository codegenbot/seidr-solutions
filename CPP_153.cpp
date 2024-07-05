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
    int n;
    std::cin >> class_name >> n;
    std::vector<std::string> extensions(n);
    for(auto& ext : extensions) {
        std::cin >> ext;
    }
    std::cout << Strongest_Extension(class_name, extensions) << std::endl;
    return 0;
}