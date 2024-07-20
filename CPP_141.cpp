#include <string>
#include <vector>

bool is_valid_file_name(string file_name) {
    int digit_count = 0;
    bool found_dot = false;

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3) return false;
        } else if (file_name[i] == '.') {
            found_dot = true;
        } else if (!found_dot && !isalpha(file_name[i])) {
            return false;
        }
    }

    if (!found_dot || file_name.find('.') == string::npos) {
        return false;
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    for (string ext : valid_extensions) {
        if (extension == ext) break;
    }
    if (extension != "txt" && extension != "exe" && extension != "dll") return false;

    return true;
}

int main() {
    assert(is_valid_file_name("s.") == false);
    return 0;
}