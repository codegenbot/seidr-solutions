#include <string>
using namespace std;

string file_name_check(string file_name) {
    int dot_count = 0;
    bool has_dot = false;
    int digit_count = 0;
    char prev_char = '\0';
    
    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            has_dot = true;
        } else if (isdigit(c)) {
            digit_count++;
        } else if (!has_dot && !isalpha(c)) {
            return "No";
        }
        
        prev_char = c;
    }
    
    if (dot_count > 1) {
        return "No";
    }
    
    string file_extension = "";
    for (int i = file_name.find('.'); i < file_name.length(); i++) {
        file_extension += file_name[i];
    }
    
    if (file_extension != "txt" && file_extension != "exe" && file_extension != "dll") {
        return "No";
    }
    
    if (digit_count > 3) {
        return "No";
    }
    
    if (!has_dot) {
        return "No";
    }
    
    return "Yes";
}