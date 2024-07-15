#include <string>

std::string file_name_check(const std::string& file_name) {
    int digits = 0;
    int dot = 0;
    int dotIndex = -1;

    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digits++;
        } else if (file_name[i] == '.') {
            dot++;
            dotIndex = i;
        }
    }

    if (digits > 3 || dot != 1 || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return std::string("No");
    }

    std::string extension = file_name.substr(dotIndex + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return std::string("No");
    }

    return std::string("Yes");
}