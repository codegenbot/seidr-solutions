int dotIndex = file_name.find(".");
    if (dotIndex == string::npos || dotIndex == 0 || dotIndex == file_name.size() - 1) {
        return "No";
    }

    string nameBeforeDot = file_name.substr(0, dotIndex);
    string extension = file_name.substr(dotIndex + 1);

    if (nameBeforeDot.empty() || !isalpha(nameBeforeDot[0])) {
        return "No";
    }

    int digitCount = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        }
    }

    if (digitCount > 3) {
        return "No";
    }

    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }

    return "Yes";
}