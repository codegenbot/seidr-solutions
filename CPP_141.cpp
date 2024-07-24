#include <iostream>
#include <string>

bool file_name_check(std::string file_name) {
    bool has_digits = false;
    int dot_count = 0;

    for (char c : file_name) {
        if (isdigit(c)) {
            if (!has_digits) {
                has_digits = true;
            }
            if (has_digits && has_digits < 3) {
                has_digits++;
            } else {
                return false;
            }
        } else if (c == '.') {
            dot_count++;
            if (dot_count > 1) {
                return false;
            }
        }
    }

    if (!has_digits || dot_count != 1) {
        return false;
    }

    std::string ext = "";
    int i = file_name.find('.');
    for (; i < file_name.size(); i++) {
        ext += file_name[i];
    }
    i = 0;
    while (i < ext.size() && (ext[i] == 't' || ext[i] == 'T' || ext[i] == 'x' || ext[i] == 'X')) {
        i++;
    }

    if (i > 0) {
        return true;
    } else if (ext == "txt" || ext == "exe" || ext == "dll") {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string file_name = "test.txt";
    bool result = file_name_check(file_name);
    std::cout << (result ? "Yes" : "No") << std::endl;
    return 0;
}