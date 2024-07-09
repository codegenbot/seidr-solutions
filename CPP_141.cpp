Here is the completed code:

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    bool name_startsWith_letter = true;

    for (int i = 0; i < file_name.size(); i++) {
        char c = tolower(file_name[i]);

        if (!found_dot && c == '.') {
            found_dot = true;
            continue;
        }

        if (!isalpha(c) && !isdigit(c)) {
            name_startsWith_letter = false;
        }

        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) {
                return "No";
            }
        }
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }

    return found_dot ? "Yes" : "No";
}