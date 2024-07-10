int count_digits(string file_name) {
    int count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    int digit_count = count_digits(file_name);
    if (digit_count > 3 || file_name.find('.') == string::npos || 
        file_name.substr(0, file_name.find('.')).empty() || 
        (!isalpha(file_name[0])) || 
        (file_name.find('.') != string::npos && 
         (file_name.substr(file_name.find('.') + 1).compare("txt") != 0 &&
          file_name.substr(file_name.find('.') + 1).compare("exe") != 0 &&
          file_name.substr(file_name.find('.') + 1).compare("dll") != 0))) {
        return "No";
    }
    return "Yes";
}