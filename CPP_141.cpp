int digitCount = 0;
    int dotCount = 0;
    int dotIndex = -1;
    string validExtensions[] = {"txt", "exe", "dll"};

    for (int i = 0; i < file_name.size(); i++) {
        if (isdigit(file_name[i])) {
            digitCount++;
        } else if (file_name[i] == '.') {
            dotCount++;
            dotIndex = i;
        }
    }

    if (digitCount > 3 || dotCount != 1 || dotIndex == 0 || dotIndex == file_name.size() - 1) {
        return "No";
    }

    string extension = file_name.substr(dotIndex + 1);
    bool isValidExtension = false;
    for (const string &ext : validExtensions) {
        if (extension == ext) {
            isValidExtension = true;
            break;
        }
    }

    if (!isValidExtension) {
        return "No";
    }

    char firstChar = file_name[0];
    if (!(isalpha(firstChar))) {
        return "No";
    }

    return "Yes";
}