int countDigits(string str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    int digitCount = countDigits(file_name);
    if (digitCount > 3 || file_name.find('.') == string::npos || 
        file_name.substr(0, file_name.find('.')).empty() || !isalpha(file_name[0]) || 
        (file_name.find(".txt") == string::npos && file_name.find(".exe") == string::npos && file_name.find(".dll") == string::npos)) {
        return "No";
    }
    return "Yes";
}