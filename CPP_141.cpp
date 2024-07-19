#include <iostream>
#include <string>
#include <cassert>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    int dot_count = 0;
    int dot_index = -1;
    
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digit_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
            dot_index = i;
        }
    }
    
    if (digit_count > 3 || dot_count != 1 || dot_index == 0 || dot_index == file_name.length() - 1) {
        return "No";
    }
    
    std::string extension = file_name.substr(dot_index + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}

int main() {
    assert(file_name_check("file.txt") == "Yes");
    assert(file_name_check("file.exe") == "Yes");
    assert(file_name_check("file.dll") == "Yes");
    assert(file_name_check("1234.txt") == "No");
    assert(file_name_check(".txt") == "No");
    assert(file_name_check("file.pdf") == "No");
    
    return 0;
}