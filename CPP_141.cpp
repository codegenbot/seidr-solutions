int digits = 0;
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digits++;
        }
    }

    size_t dot_pos = file_name.find('.');
    if (digits > 3 || dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string prefix = file_name.substr(0, dot_pos);
    string suffix = file_name.substr(dot_pos + 1);

    if (!isalpha(prefix[0]) || suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }

    return "Yes";
}