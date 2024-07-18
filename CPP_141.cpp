#include <iostream>
#include <string>
#include <cctype>

std::string file_name_check(const std::string& file_name) {
    int count_digits = 0;
    int dot_pos = -1;
    
    for (size_t i = 0; i < file_name.length(); ++i) {
        if (std::isdigit(file_name[i])) {
            count_digits++;
        } else if (file_name[i] == '.') {
            if (dot_pos != -1) {
                return "No";
            }
            dot_pos = i;
        }
    }
    
    if (count_digits > 3 || dot_pos == -1 || dot_pos == 0 || dot_pos == file_name.length() - 1) {
        return "No";
    }
    
    std::string extension = file_name.substr(dot_pos + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    assert(file_name_check("sample.txt") == "Yes");
    return 0;
}