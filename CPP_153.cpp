#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <climits>
#include <cassert>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int max_strength = INT_MIN;
    std::string strongest_extension = "";

    for (const std::string& extension : extensions) {
        int cap_count = 0, sm_count = 0;
        for (char c : extension) {
            if (isupper(c)) {
                cap_count++;
            } else if (islower(c)) {
                sm_count++;
            }
        }

        int strength = cap_count - sm_count;
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}