#include <string>

std::string file_name_check(std::string file_name) {
    bool hasDigit = false;
    int dotCount = 0;

    for (char c : file_name) {
        if (isdigit(c)) {
            if (!hasDigit) hasDigit = true; 
            else return "No";
        } else if (c == '.') {
            dotCount++;
            if (dotCount > 1) return "No"; 
        } else if (c == ' ' || c < 'a' || c > 'z' && c < 'A' || c > 'Z') {
            return "No"; 
        }
    }

    std::string suffix;
    int i = 0;
    while (i < file_name.size()) {
        if (file_name[i] == '.') break;
        i++;
    }
    suffix = file_name.substr(i + 1);

    if (suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";

    return hasDigit ? "No" : "Yes";
}

int main() {
    assert (file_name_check("s.") == "No");
    return 0;
}