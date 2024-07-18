#include <string>
#include <vector>
#include <climits>
#include <cassert>

int CAP(std::string s) {
    int count = 0;
    for (char c : s) {
        if (isupper(c)) {
            count++;
        }
    }
    return count;
}

int SM(std::string s) {
    int count = 0;
    for (char c : s) {
        if (islower(c)) {
            count++;
        }
    }
    return count;
}

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension;
    int max_strength = INT_MIN;

    for (std::string ext : extensions) {
        int strength = CAP(ext) - SM(ext);
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}