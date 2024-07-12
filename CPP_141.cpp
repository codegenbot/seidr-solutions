int countDigits(string s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    int digitCount = countDigits(file_name);
    int dotCount = 0;
    bool validStart = false;

    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] == '.') {
            dotCount++;
            if (dotCount > 1) {
                return "No";
            }
        } else if (!validStart && isalpha(file_name[i])) {
            validStart = true;
        } else if (i > 0 && !isalpha(file_name[i]) && !isdigit(file_name[i]) && file_name[i] != '.') {
            return "No";
        }
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if (extension == "txt" || extension == "exe" || extension == "dll") {
        return digitCount <= 3 ? "Yes" : "No";
    } else {
        return "No";
    }
}