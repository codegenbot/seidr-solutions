#include <string>

using namespace std;

string fix_spaces(string text) {
    string result = "";
    bool spaceFound = false;
    
    for (char c : text) {
        if (c == ' ') {
            if (!spaceFound || !result.empty()) {
                if (spaceFound && result.back() == ' ') {
                    result += "-";
                } else {
                    result += '_';
                }
            }
            spaceFound = true;
        } else {
            spaceFound = false;
        }
        result += c;
    }
    
    return result;
}