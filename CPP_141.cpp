bool has_digit = false;
int dot_count = 0;

for (char c : file_name) {
    if (c == '.') {
        dot_count++;
        if (dot_count > 1) break;
    } else if (isdigit(c)) {
        has_digit = true;
        if (++count > 3) break;
    }
}

return (has_digit || dot_count != 1) ? "No" : ((file_name.substr(0, file_name.find('.')).find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos || !({{"txt", "exe", "dll"}}.count(file_name.substr(file_name.find('.') + 1)))) ? "No" : "Yes";