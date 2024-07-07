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
    int dot_count = 0, digit_count = 0;
    bool starts_with_letter = false;

    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            if (dot_count > 1) return "No";
        } else if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (!starts_with_letter && isalpha(c)) {
            starts_with_letter = true;
        }
    }

    size_t pos = file_name.find('.');
    if (pos == string::npos || pos + 4 >= file_name.size()) return "No";

    string ext = file_name.substr(pos + 1);
    if (ext != "txt" && ext != "exe" && ext != "dll") return "No";

    return starts_with_letter ? "Yes" : "No";
}