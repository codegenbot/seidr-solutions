#include <string>
#include <vector>

int count_uppercase(std::string s) {
    int count = 0;
    for (char c : s) {
        if (std::isupper(c)) {
            count++;
        }
    }
    return count;
}

int count_lowercase(std::string s) {
    int count = 0;
    for (char c : s) {
        if (std::islower(c)) {
            count++;
        }
    }
    return count;
}

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    std::string strongest_extension = extensions[0];
    int max_strength = count_uppercase(strongest_extension) - count_lowercase(strongest_extension);

    for (int i = 1; i < extensions.size(); i++) {
        int strength = count_uppercase(extensions[i]) - count_lowercase(extensions[i]);
        if (strength > max_strength) {
            strongest_extension = extensions[i];
            max_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}