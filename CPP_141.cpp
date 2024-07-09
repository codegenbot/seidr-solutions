int digitCount = 0;
    int dotCount = 0;
    int letterCount = 0;
    int validExtension = 0;

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitCount++;
        } else if (c == '.') {
            dotCount++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letterCount++;
        }
    }

    if (digitCount <= 3 && dotCount == 1 && letterCount > 0) {
        size_t dotPos = file_name.find('.');
        string extension = file_name.substr(dotPos + 1);
        if (extension == "txt" || extension == "exe" || extension == "dll") {
            validExtension = 1;
        }
    }

    if (digitCount <= 3 && dotCount == 1 && letterCount > 0 && validExtension) {
        return "Yes";
    } else {
        return "No";
    }
}