#include <iostream>
#include <string>

using namespace std;

string file_name_check(string file_name) {
    int dotIndex = file_name.find('.');
    if (dotIndex == -1 || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return "No";
    }
    string fileNameWithoutExtension = file_name.substr(0, dotIndex);
    string fileExtension = file_name.substr(dotIndex + 1);
    if (fileNameWithoutExtension.empty()) {
        return "No";
    }
    int digitCount = 0;
    for (char c : fileNameWithoutExtension) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    if (digitCount > 3) {
        return "No";
    }
    if (fileExtension != "txt" && fileExtension != "exe" && fileExtension != "dll") {
        return "No";
    }
    if (!isalpha(fileNameWithoutExtension[0])) {
        return "No";
    }
    return "Yes";
}