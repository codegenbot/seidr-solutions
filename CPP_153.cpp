#include <string>
#include <vector>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_length = 0;
    std::string strongest_extension;

    for (const auto& extension : extensions) {
        if (extension.length() > max_length) {
            max_length = extension.length();
            strongest_extension = extension;
        }
    }

    return strongest_extension;
}