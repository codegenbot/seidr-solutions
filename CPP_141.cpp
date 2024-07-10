#include <string>

using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    string first_part = "";
    
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (c == '.') {
            found_dot = true;
        } else if (!found_dot) {
            first_part += c;
        }
    }
    
    if (!first_part.size() || !isalpha(first_part[0]))
        return "No";
    
    string second_part = file_name.substr(file_name.find('.') + 1);
    
    if (second_part != "txt" && second_part != "exe" && second_part != "dll")
        return "No";
    
    if (found_dot)
        return "Yes";
    else
        return "No";
}