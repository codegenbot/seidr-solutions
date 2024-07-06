string file_name_check(string file_name) {
    int digit_count = 0, dot_count = 0;
    bool valid = true;

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digit_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
        } else if (!isalpha(file_name[i]) && !isalnum(file_name[i])) {
            valid = false;
            break;
        }
    }

    if (digit_count > 3 || dot_count != 1) {
        valid = false;
    }

    string result = (valid && file_name.substr(file_name.find('.')+1).compare("txt") == 0 ||
                     file_name.substr(file_name.find('.')+1).compare("exe") == 0 ||
                     file_name.substr(file_name.find('.')+1).compare("dll") == 0) ? "Yes" : "No";

    return result;
}