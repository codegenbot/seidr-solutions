#include <string>

using namespace std;

string file_name_check(string file_name) {
    int digitCount = 0;
    bool foundDot = false;
    string leftPart = "";
    string rightPart = "";

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digitCount++;
            if (digitCount > 3) {
                return "No";
            }
        } else if (file_name[i] == '.') {
            foundDot = true;
            rightPart = file_name.substr(i + 1);
            break;
        } else {
            leftPart += file_name[i];
        }
    }

    if (!foundDot || leftPart.empty() || !isalpha(leftPart[0])) {
        return "No";
    }

    string extensions[] = {"txt", "exe", "dll"};
    bool isValidExtension = false;

    for (int i = 0; i < 3; i++) {
        if (rightPart == extensions[i]) {
            isValidExtension = true;
            break;
        }
    }

    return isValidExtension ? "Yes" : "No";
}