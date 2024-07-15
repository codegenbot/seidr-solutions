#include <cassert>

string file_name_check(string file_name) {
    int digitCount = 0;
    int dotCount = 0;
    int dotIndex = -1;

    for (int i = 0; i < file_name.size(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digitCount++;
        }
        else if (file_name[i] == '.') {
            dotCount++;
            dotIndex = i;
        }
    }

    if (digitCount > 3 || dotCount != 1 || dotIndex == 0 || dotIndex == file_name.size() - 1) {
        return "No";
    }

    string extension = file_name.substr(dotIndex + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }

    char firstChar = file_name[0];
    if (!((firstChar >= 'a' && firstChar <= 'z') || (firstChar >= 'A' && firstChar <= 'Z'))) {
        return "No";
    }

    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    assert(file_name_check("test.txt") == "Yes");
    assert(file_name_check("file.exe") == "Yes");
    assert(file_name_check("data123.dll") == "No");
    return 0;
}