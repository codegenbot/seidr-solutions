#include <iostream>
#include <string>

using namespace std;

string fix_spaces(const string& text) {
    string result = "";
    bool prev_space = false;
    int space_count = 0;
    
    for (char c : text) {
        if (c == ' ') {
            space_count++;
            if (space_count > 2) {
                if (!prev_space) {
                    result += "-";
                }
                prev_space = true;
            } else {
                result += "_";
                prev_space = false;
            }
        } else {
            result += c;
            space_count = 0;
            prev_space = false;
        }
    }
    
    return result;
}