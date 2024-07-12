string file_name_check(string file_name) {
    bool one_dot = false;
    int digit_count = 0;
    char prev_char = 'a'; // assuming first character is a letter

    for (int i = 0; i < file_name.size(); ++i) {
        if (file_name[i] == '.') {
            one_dot = true;
        } else if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (!isalpha(file_name[i]) || !isalpha(prev_char)) {
            return "No";
        }
        prev_char = file_name[i];
    }

    if (!one_dot) return "No";
    int dot_pos = file_name.find('.');
    string ext = file_name.substr(dot_pos + 1);

    vector<string> valid_exts = {"txt", "exe", "dll"};
    if (find(valid_exts.begin(), valid_exts.end(), ext) == valid_exts.end()) {
        return "No";
    }

    return "Yes";
}