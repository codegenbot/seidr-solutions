string file_name_check(string file_name) {
    int count = 0;
    bool foundDot = false;
    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            count++;
            if (count > 3) return "No";
        } else if (file_name[i] == '.') {
            foundDot = true;
        }
    }
    if (!foundDot || !file_name.substr(0, 1).find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) return "No";
    if (file_name.find('.') != string::npos) {
        string extension = file_name.substr(file_name.find('.') + 1);
        if (extension != "txt" && extension != "exe" && extension != "dll") return "No";
    }
    return "Yes";
}