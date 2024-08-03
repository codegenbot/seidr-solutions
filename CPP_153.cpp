#include <string>
#include <vector>
#include <cassert>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const auto& ext : extensions) {
        int cap_count = 0, sm_count = 0;
        for (char c : ext) {
            if (std::isupper(c)) {
                cap_count++;
            } else if (std::islower(c)) {
                sm_count++;
            }
        }
        int strength = cap_count - sm_count;
        if (strength > max_strength || (strength == max_strength && strongest_extension.empty())) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    
    return 0;
}