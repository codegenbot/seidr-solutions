#include <string>

using namespace std;

string file_name_check(string file_name) {
    int digitCount = 0;
    bool foundDot = false;
    string prefix = "";
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            foundDot = true;
        } else if (!foundDot) {
            prefix += c;
        }
    }
    
    if (digitCount > 3 || !foundDot || prefix.empty() || !isalpha(prefix[0])) {
        return "No";
    }
    
    string suffix = file_name.substr(file_name.find('.') + 1);
    if (!(suffix == "txt" || suffix == "exe" || suffix == "dll")) {
        return "No";
    }
    
    return "Yes";
}