int file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) {
                valid_prefix = false;
                break;
            }
        } else if (c == '.') {
            found_dot = true;
        } else if (!isalpha(c)) {
            valid_prefix = false;
            break;
        }
    }

    return (digit_count <= 3 && found_dot && valid_prefix) ? 1 : 
           (!found_dot && !std::all_of(file_name.begin() + digit_count, file_name.end(), ::isalpha())) ? 0 : 1;
}