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
    int digit_count = count_digits(file_name);
    if (digit_count > 3 || file_name.find('.') == string::npos || 
        !isalpha(file_name[0]) || file_name.substr(0, file_name.find('.')).find('.') != string::npos ||
        (file_name.find('.') != string::npos && 
         (file_name.substr(file_name.find('.') + 1) != "txt" && 
          file_name.substr(file_name.find('.') + 1) != "exe" && 
          file_name.substr(file_name.find('.') + 1) != "dll"))) {
        return "No";
    }
    return "Yes";
}