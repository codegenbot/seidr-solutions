#include <iostream>
#include <string>
#include <cassert>

std::string file_name_check(const std::string& file_name) {
    int digits = 0, dots = 0, dotIndex = -1;

    for (size_t i = 0; i < file_name.size(); ++i) {
        if (std::isdigit(file_name[i])) {
            digits++;
        } else if (file_name[i] == '.') {
            dots++;
            dotIndex = i;
        }
    }

    if (digits <= 3 && dots == 1 && dotIndex > 0 && dotIndex < file_name.size() - 1) {
        std::string extension = file_name.substr(dotIndex + 1);
        if (extension == "txt" || extension == "exe" || extension == "dll") {
            if (std::isalpha(file_name[0])) {
                return "Yes";
            }
        }
    }
    
    return "No";
}

int main() {
    assert(file_name_check("file.txt") == "Yes");
    assert(file_name_check("app.exe") == "Yes");
    assert(file_name_check("doc.dll") == "Yes");
    assert(file_name_check("3x4.file") == "No");
    assert(file_name_check("myApp.") == "No");

    return 0;
}