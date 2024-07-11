#include <string>
#include <cassert>
#include <cctype>

string file_name_check(string file_name) {
    int countDigits = 0;
    int dotPos = file_name.find('.');
    
    if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.length() - 1) {
        return "No";
    }
    
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            countDigits++;
        }
    }
    
    if (countDigits > 3) {
        return "No";
    }
    
    string prefix = file_name.substr(0, dotPos);
    string suffix = file_name.substr(dotPos + 1);
    
    if (prefix.empty() || !(isalpha(prefix[0]))) {
        return "No";
    }
    
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }
    
    return "Yes";
}

int main() {
    string file_name_check(string file_name);
    
    assert(file_name_check("s.") == "No");
    assert(file_name_check("file.txt") == "Yes");
    assert(file_name_check("document.exe") == "Yes");
    assert(file_name_check("data.dll") == "Yes");
    assert(file_name_check("123.txt") == "No");
    
    return 0;
}