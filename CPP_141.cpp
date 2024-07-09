```cpp
#include <iostream>
#include <string>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (c == '.') {
            found_dot = true;
        }
    }
    if (!found_dot || file_name.find('.') == string::npos)
        return "No";
    size_t pos = file_name.find('.');
    std::string before_dot = file_name.substr(0, pos);
    std::string after_dot = file_name.substr(pos + 1);
    if (before_dot.empty() || !isalpha(before_dot[0]))
        return "No";
    std::vector<std::string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end())
        return "No";
    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    return 0;
}