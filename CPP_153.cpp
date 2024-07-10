Here is the corrected code:

#include <string>
#include <vector>

std::basic_string<char> Strongest_Extension(std::basic_string<char> class_name, std::vector<std::basic_string<char>> extensions){
    int max_length = 0;
    std::basic_string<char> strongest_extension;

    for (const auto& extension : extensions) {
        if (extension.length() > max_length) {
            max_length = extension.length();
            strongest_extension = extension;
        }
    }

    return strongest_extension;
}