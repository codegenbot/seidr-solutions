#include <string>

string file_name_check(string file_name) {
    int digitsCount = 0;
    int dotCount = 0;
    int latinLetterCount = 0;
    int validExtension = 0;

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitsCount++;
        } else if (c == '.') {
            dotCount++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            latinLetterCount++;
        }
    }

    size_t dotPos = file_name.find('.');
    if (dotPos != string::npos) {
        string extension = file_name.substr(dotPos + 1);
        if (extension == "txt" || extension == "exe" || extension == "dll") {
            validExtension = 1;
        }
    }

    if (digitsCount <= 3 && dotCount == 1 && latinLetterCount > 0 && validExtension) {
        return "Yes";
    } else {
        return "No";
    }
}