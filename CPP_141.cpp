```cpp
#include <algorithm>
#include <cctype>
#include <string>

bool isalpha(char c) {
    return std::isalpha(c);
}

std::string file_name_check(const std::string& file_name) {
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            found_dot = true;
        } else if (!isalpha(c)) {
            valid_prefix = false;
        }
    }

    return (digit_count <= 3 && found_dot && valid_prefix) ? "Yes" : 
           (!found_dot && !std::all_of(file_name.begin() + digit_count, file_name.end(), isalpha)) ? "No" : "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    return 0;
}