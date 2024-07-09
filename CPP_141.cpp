#include <cctype>
using namespace std;

string file_name_check(string file_name) {
    int digitCount = 0, dotCount = 0;
    bool valid = true;

    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
            if (digitCount > 3)
                return "No";
        } else if (c == '.') {
            dotCount++;
            if (dotCount > 1)
                return "No";
        } else if (!isalpha(c) && !isspace(c))
            valid = false;
    }

    if (!valid || file_name.find(".txt") == string::npos &&
       file_name.find(".exe") == string::npos && file_name.find(".dll") == string::npos)
        return "No";

    return "Yes";
}