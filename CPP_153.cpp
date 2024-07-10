#include <string>
#include <vector>
#include <cassert>
#include <climits>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    if (class_name.empty() || extensions.empty()) return "";

    std::string strongest_extension = "";
    size_t max_strength = SIZE_MAX;

    for (const std::string& ext : extensions) {
        if (ext.empty()) continue;

        size_t cap_count = 0, sm_count = 0;
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
            size_t strength = std::max(cap_count, sm_count) - std::min(cap_count, sm_count);
            if (strength < max_strength || (strength == max_strength && ext.size() > strongest_extension.size())) {
                max_strength = strength;
                strongest_extension = ext;
            }
        }
    }

    if (max_strength == SIZE_MAX) {
        return "";
    }

    return class_name + "." + strongest_extension;
}