#include <iostream>
#include <string>
#include <cassert>

std::string file_name_check(const std::string& file_name) {
    int num_digits = 0;
    int dot_pos = -1;
    
    for (int i = 0; i < file_name.size(); ++i) {
        if (std::isdigit(file_name[i])) {
            num_digits++;
        } else if (file_name[i] == '.') {
            dot_pos = i;
        }
    }
    
    if (num_digits > 3 || dot_pos == -1 || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }
    
    std::string before_dot = file_name.substr(0, dot_pos);
    std::string after_dot = file_name.substr(dot_pos + 1);
    
    if (!(std::isalpha(before_dot[0]))) {
        return "No";
    }
    
    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }
    
    return "Yes";
}

int main() {
    assert (file_name_check("s.") == "No");
    
    return 0;
}