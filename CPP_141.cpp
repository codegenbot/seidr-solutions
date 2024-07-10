#include <string>
#include <cassert>

int countDigits(std::string s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

std::string file_name_check(std::string file_name){
    int dotPos = file_name.find('.');
    if (dotPos == std::string::npos || dotPos == 0 || dotPos == file_name.size()-1) {
        return "No";
    }

    std::string nameBeforeDot = file_name.substr(0, dotPos);
    std::string extension = file_name.substr(dotPos + 1);

    if (countDigits(nameBeforeDot) > 3) {
        return "No";
    }

    if (!isalpha(nameBeforeDot[0])) {
        return "No";
    }

    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }

    return "Yes";
}