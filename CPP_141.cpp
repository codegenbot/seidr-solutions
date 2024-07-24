bool has_digit = false;
bool has_dot = false;
string before_dot = "";
string after_dot = "";

for(char c : file_name) {
    if(isdigit(c)) {
        if(has_digit) return "No";
        has_digit = true;
    } else if(c == '.') {
        if(has_dot) return "No";
        has_dot = true;
        string temp = "";
        for(++file_iter; file_iter != file_name.end(); ++file_iter) {
            if(*file_iter == '.')
                break;
            temp += *file_iter;
        }
        after_dot = temp;
    } else if(before_dot.empty()) {
        before_dot += c;
    } else {
        string temp = "";
        for(++file_iter; file_iter != file_name.end(); ++file_iter) {
            temp += *file_iter;
        }
        if(after_dot == "txt" || after_dot == "exe" || after_dot == "dll")
            return "Yes";
        return "No";
    }
}
return has_digit ? "No" : (after_dot.empty() ? "No" : "Yes");