```cpp
#include <string>
#include <vector>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (file_name[i] == '.') {
            found_dot = true;
        } else if (!found_dot && !isalpha(file_name[i])) {
            return "No";
        }
    }

    if (!found_dot || file_name.find('.') == std::string::npos) {
        return "No";
    }

    std::string extension = file_name.substr(file_name.find('.') + 1);
    std::vector<std::string> valid_extensions = {"txt", "exe", "dll"};
    for (std::string ext : valid_extensions) {
        if (extension == ext) break;
    }
    if (extension != "txt" && extension != "exe" && extension != "dll") return "No";

    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    return 0;
}