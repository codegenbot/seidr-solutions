Here is the completed code:

string file_name_check(string file_name) {
    bool valid = true;
    int dot_count = 0;
    int digit_count = 0;

    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            if (dot_count > 1) {
                valid = false;
                break;
            }
        } else if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) {
                valid = false;
                break;
            }
        } else if (!isalpha(c) && c != '.') {
            valid = false;
            break;
        }
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if (extension.size() > 0) {
        if (extension != "txt" && extension != "exe" && extension != "dll") {
            valid = false;
        }
    } else {
        valid = false;
    }

    return valid ? "Yes" : "No";
}