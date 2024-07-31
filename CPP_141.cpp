int numDigits = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            numDigits++;
        }
    }

    size_t dotPos = file_name.find('.');
    if (numDigits <= 3 && dotPos != string::npos && dotPos > 0 && dotPos < file_name.size() - 1) {
        string extension = file_name.substr(dotPos + 1);
        if (extension == "txt" || extension == "exe" || extension == "dll") {
            if (isalpha(file_name[0])) {
                return "Yes";
            }
        }
    }
    return "No";
}