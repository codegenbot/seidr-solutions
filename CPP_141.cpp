int main() {
    bool has_digits = false;
    int dot_count = 0;

    string file_name;
    cout << "Enter a filename: ";
    cin >> file_name;

    for (char c : file_name) {
        if (isdigit(c)) {
            if (!has_digits) {
                has_digits = true;
            }
            if (has_digits && has_digits < 3) {
                has_digits++;
            } else {
                return 0;
            }
        } else if (c == '.') {
            dot_count++;
            if (dot_count > 1) {
                return 0;
            }
        }
    }

    if (!has_digits || dot_count != 1) {
        return 0;
    }

    string ext = "";
    int i = file_name.find('.');
    for (; i < file_name.size(); i++) {
        ext += file_name[i];
    }
    i = 0;
    while (i < ext.size() && (ext[i] == 't' || ext[i] == 'T' || ext[i] == 'x' || ext[i] == 'X')) {
        i++;
    }

    if (i > 0) {
        return 1;
    } else if (ext == "txt" || ext == "exe" || ext == "dll") {
        return 1;
    } else {
        return 0;
    }
}