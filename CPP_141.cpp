#include <string>

int countDigits(string str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    int digitCount = countDigits(file_name);
    int dotCount = 0;
    bool validStart = false;

    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] == '.') {
            dotCount++;
            break;
        }
        if (!isalpha((unsigned char)file_name[i])) {
            return "No";
        }
        validStart = true;
    }

    if (!validStart || dotCount > 1) {
        return "No";
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if (find(validExtensions.begin(), validExtensions.end(), extension) == validExtensions.end()) {
        return "No";
    }

    if (digitCount > 3) {
        return "No";
    }
    return "Yes";