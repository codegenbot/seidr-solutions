#include <string>
#include <vector>
#include <cassert>
#include <climits>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    if (class_name.empty() || extensions.empty()) return "";

    std::string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const std::string& ext : extensions) {
        int cap_count = 0, sm_count = 0;
        bool valid_extension = true;
        for (char c : ext) {
            if (!isupper(c) && !islower(c)) {
                valid_extension = false;
                break;
            }
            if (isupper(c)) {
                cap_count++;
            } else {
                sm_count++;
            }
        }

        if (valid_extension) {
            int strength = abs(cap_count - sm_count);
            if (strength > max_strength || (strength == max_strength && ext.size() > strongest_extension.size())) {
                max_strength = strength;
                strongest_extension = ext;
            }
        }
    }

    if (max_strength == INT_MIN) {
        return "";
    }

    return class_name + "." + strongest_extension;
}