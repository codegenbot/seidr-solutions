Here is the completed code:

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (c == '.') {
            found_dot = true;
        } else if (!found_dot && !isalpha(c)) {
            return "No";
        }
    }
    if (!found_dot || file_name.find('.') == string::npos || 
        (file_name.find('.') != string::npos && 
         (file_name.substr(file_name.find('.') + 1) != "txt" &&
          file_name.substr(file_name.find('.') + 1) != "exe" &&
          file_name.substr(file_name.find('.') + 1) != "dll")) {
        return "No";
    }
    return "Yes";
}