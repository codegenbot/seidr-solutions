#include <string>
#include <vector>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions);

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension;
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
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}