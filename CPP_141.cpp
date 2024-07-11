int digit_count = 0;
    int dot_count = 0;
    int letter_count = 0;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            dot_count++;
        } else if (isalpha(c)) {
            letter_count++;
        }
    }

    if (digit_count > 3 || dot_count != 1 || letter_count == 0 || file_name.find('.') == 0 || (file_name.find('.') == file_name.size() - 1) || (file_name.substr(file_name.find('.') + 1) != "txt" && file_name.substr(file_name.find('.') + 1) != "exe" && file_name.substr(file_name.find('.') + 1) != "dll")) {
        return "No";
    } else {
        return "Yes";
    }
}