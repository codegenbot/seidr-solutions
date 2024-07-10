string file_name_check(string file_name){
    int dot_index = file_name.find('.');
    if (dot_index == string::npos) {
        return "No";
    }
    string before_dot = file_name.substr(0, dot_index);
    string after_dot = file_name.substr(dot_index + 1);

    bool is_valid = true;
    is_valid &= count(before_dot.begin(), before_dot.end(), '0'-'9') <= 3;
    is_valid &= count(after_dot.begin(), after_dot.end(), '0'-'9') == 0;
    is_valid &= (before_dot[0] >= 'a' && before_dot[0] <= 'z') || (before_dot[0] >= 'A' && before_dot[0] <= 'Z');
    is_valid &= (after_dot == "txt" || after_dot == "exe" || after_dot == "dll");

    return is_valid ? "Yes" : "No";
}