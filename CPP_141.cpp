string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        }
        else if (c == '.') {
            has_dot = true;
        }
        else if (!has_dot) {
            before_dot += c;
            if (isalpha(c)) continue;
            else return "No";
        }
    }

    if (!has_dot) return "No";

    string after_dot = file_name.substr(file_name.find('.') + 1);
    if (after_dot.size() < 3 || (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")) return "No";

    return "Yes";
}