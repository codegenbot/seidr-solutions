int count_digits(string s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    int digit_count = count_digits(file_name);
    if (digit_count > 3 || file_name.find('.') == string::npos || 
        (file_name.find('.') != string::npos && file_name.substr(0, file_name.find('.')).empty()) ||
        (!isalpha(file_name[0]) && !isalpha(toupper(file_name[0])))) {
        return "No";
    }
    string extension = file_name.substr(file_name.find('.') + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    return "Yes";
}