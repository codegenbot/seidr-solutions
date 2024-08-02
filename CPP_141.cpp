int i = 0;
bool valid = true;

while (i < file_name.length()) {
    if (isdigit(file_name[i])) {
        i++;
        continue;
    }

    if (!valid) break;

    if (file_name[i] == '.') {
        i++;
        bool found = false;
        while (i < file_name.length()) {
            if (file_name[i] == ' ') {
                valid = false;
                break;
            }
            i++;
        }
        break;
    }

    if (!isalpha(file_name[i])) {
        valid = false;
        break;
    }

    i++;
}

if (valid) {
    int j = file_name.find('.');
    string extension = file_name.substr(j + 1);
    if (extension == "txt" || extension == "exe" || extension == "dll") {
        return "Yes";
    } else {
        return "No";
    }
} else {
    return "No";
}