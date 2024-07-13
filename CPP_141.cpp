#include <cstddef>
#include <string>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool has_dot = false;
    size_t dot_pos = std::string::npos;

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digit_count++;
        } else if (c == '.') {
            has_dot = true;
            dot_pos = file_name.find(c);
        } else if (!has_dot) {
            if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z')) {
                return "No";
            }
        } else {
            std::string ext = file_name.substr(dot_pos + 1);
            if (ext != "txt" && ext != "exe" && ext != "dll") {
                return "No";
            }
        }
    }

    return digit_count <= 3 && has_dot ? "Yes" : "No";
}

int main() {
    assert(file_name_check("s.") == "No");
    // Your code here
}