int num_digits = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            num_digits++;
        }
    }

    size_t dot_pos = file_name.find('.');
    if (num_digits <= 3 && dot_pos != string::npos && dot_pos > 0 && dot_pos < file_name.size() - 1) {
        string extension = file_name.substr(dot_pos + 1);
        if (extension == "txt" || extension == "exe" || extension == "dll") {
            if (isalpha(file_name[0])) {
                return "Yes";
            }
        }
    }
    return "No";
}