#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <climits>

std::string Strongest_Extension(const std::string& class_name, const std::vector<std::string>& extensions) {
    std::string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const std::string& ext : extensions) {
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
    // Example test case
    std::cout << Strongest_Extension("Sp", {"671235", "Bb"}) << std::endl;  // Expected: "Sp.671235"
    return 0;
}