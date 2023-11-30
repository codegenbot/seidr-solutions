#include <string>
using namespace std;

string file_name_check(string file_name) {
    int dotIndex = file_name.find(".");
    if (dotIndex == string::npos) {
        return "No";
    }
    string prefix = file_name.substr(0, dotIndex);
    string suffix = file_name.substr(dotIndex + 1);
    if (prefix.empty() || !isalpha(prefix[0])) {
        return "No";
    }
    int digitCount = 0;
    for (char c : prefix) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    if (digitCount > 3) {
        return "No";
    }
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }
    return "Yes";
}