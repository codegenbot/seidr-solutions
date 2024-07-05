#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

string file_name_check(string file_name) {
    int dotPos = file_name.find('.');
    if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.length() - 1) {
        return "No";
    }

    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);
    
    if (afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return "No";
    }

    if (!isalpha(beforeDot[0])) {
        return "No";
    }

    int digitCount = count_if(beforeDot.begin(), beforeDot.end(), ::isdigit);
    if (digitCount > 3) {
        return "No";
    }

    return "Yes";
}

int main() {
    cout << file_name_check("s.") << endl; // Output: No
    return 0;
}