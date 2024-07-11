#include <iostream>
#include <string>
#include <vector>
#include <cassert>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string result;
    int max_strength = INT_MIN;

    for (const std::string& ext : extensions) {
        int cap_count = 0, sm_count = 0;
        for (char c : ext) {
            if (isupper(c)) {
                cap_count++;
            } else if (islower(c)) {
                sm_count++;
            }
        }

        int strength = cap_count - sm_count;
        if (strength > max_strength || (strength == max_strength && ext < result.substr(class_name.size() + 1))) {
            max_strength = strength;
            result = class_name + "." + ext;
        }
    }

    return result;
}

int main() {
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}