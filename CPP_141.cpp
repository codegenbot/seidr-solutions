```
int i = 0;
bool isValid = true;

while (i < file_name.size()) {
    if (isdigit(file_name[i])) {
        if (++i < file_name.size() && !isValid) break; // count the digits
        if (count_digits > 3) {
            isValid = false;
            break;
        }
    } else if (!isalpha(file_name[i])) { // check for non-alphabetical characters
        if (file_name[i] != '.') { // only one dot allowed
            isValid = false;
            break;
        } else {
            i++; // skip the dot and start checking the next part
            if (!isValid) break; // stop counting dots
        }
    }

    i++;
}

if (i < file_name.size() && (file_name.substr(i + 1).compare("txt") != 0 &&
                             file_name.substr(i + 1).compare("exe") != 0 &&
                             file_name.substr(i + 1).compare("dll") != 0)) {
    isValid = false;
}

return isValid ? "Yes" : "No";