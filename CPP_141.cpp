int dotPos = file_name.find(".");
    if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }
    string nameBeforeDot = file_name.substr(0, dotPos);
    string extension = file_name.substr(dotPos + 1);

    if (nameBeforeDot.empty() || !isalpha(nameBeforeDot[0])) {
        return "No";
    }

    int digitCount = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        }
    }

    if (digitCount > 3 || (extension != "txt" && extension != "exe" && extension != "dll")) {
        return "No";
    }

    return "Yes";
}