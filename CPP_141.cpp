#include <cctype>
#include<string>
using namespace std;

string file_name_check(string file_name){
    int digitCount = 0;
    bool hasDot = false;
    string preDot = "";
    
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            hasDot = true;
        } else if (!hasDot && !isalpha(c)) {
            return "No";
        }
        if (hasDot) {
            preDot += c;
        }
    }
    
    string postDot = "";
    for (int i = file_name.find('.') + 1; i < file_name.size(); i++) {
        postDot += file_name[i];
    }
    
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if (find(validExtensions.begin(), validExtensions.end(), postDot) == validExtensions.end()) {
        return "No";
    }
    
    return digitCount <= 3 && hasDot ? "Yes" : "No";
}