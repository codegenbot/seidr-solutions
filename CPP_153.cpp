#include <string>
#include <vector>
#include <algorithm>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension = *max_element(extensions.begin(), extensions.end());
    return class_name + "." + strongest_extension;
}