#include <string>
#include <cassert>

std::string file_name_check(const std::string& file_name) {
    int countDigits = 0;
    size_t dotPos = file_name.find('.');

    if (dotPos == std::string::npos || dotPos == 0 || dotPos == file_name.length() - 1) {
        return std::string("No");
    }

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            countDigits++;
        }
    }

    if (countDigits > 3) {
        return std::string("No");
    }

    std::string prefix = file_name.substr(0, dotPos);
    std::string suffix = file_name.substr(dotPos + 1);

    if (prefix.empty() || !(isalpha(prefix[0]))) {
        return std::string("No");
    }

    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return std::string("No");
    }

    return std::string("Yes");
}

int main() {
    assert(file_name_check("s.") == "No");
    // Add more test cases here
    return 0;
}