#include <string>

std::string file_name_check(const char* file_name) {
    int digitCount = 0;
    bool foundDot = false;
    for (int i = 0; i < strlen(file_name); i++) {
        char c = file_name[i];
        if (c >= '0' && c <= '9') {
            digitCount++;
        } else if (c == '.') {
            foundDot = true;
        } else if (foundDot) {
            const char* extension = file_name + i;
            size_t len = strlen(extension);
            if (len > 3 || strcmp(&extension[0], "txt") && strcmp(&extension[0], "exe") && strcmp(&extension[0], "dll")) {
                return "No";
            }
        }
    }
    if (digitCount > 3 || !foundDot) return "No";
    if ((file_name[0] < 'a' || file_name[0] > 'z') && (file_name[0] < 'A' || file_name[0] > 'Z')) return "No";
    return "Yes";