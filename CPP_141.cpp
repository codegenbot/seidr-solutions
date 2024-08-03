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
    if (count_digits(file_name) > 3 || file_name.find('.') == string::npos ||
        file_name.substr(0, file_name.find('.')).empty() ||
        !isalpha(file_name[0]) || 
        (!file_name.substr(file_name.find('.') + 1).compare("txt") &&
         !file_name.substr(file_name.find('.') + 1).compare("exe") &&
         !file_name.substr(file_name.find('.') + 1).compare("dll"))) {
        return "No";
    }
    return "Yes";
}