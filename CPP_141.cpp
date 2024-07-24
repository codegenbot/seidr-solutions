int count_digits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos >= file_name.size() - 4) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!before_dot.empty() && !ispunct(before_dot[0]) && isalpha(before_dot[0])) {
        if (count_digits(before_dot) <= 3 && (
            after_dot == "txt" || 
            after_dot == "exe" || 
            after_dot == "dll"
        )) {
            return "Yes";
        }
    }

    return "No";
}