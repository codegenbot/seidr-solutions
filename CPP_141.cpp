Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    for(char c : file_name) {
        if(isdigit(c)) {
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(c == '.') {
            break;
        }
    }
    if(file_name.find('.') == string::npos || file_name.find('/') != string::npos) return "No";
    int dot_position = file_name.find('.');
    string before_dot = file_name.substr(0, dot_position);
    string after_dot = file_name.substr(dot_position + 1);
    for(char c : before_dot) {
        if(!isalpha(c)) return "No";
    }
    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";
    return "Yes";