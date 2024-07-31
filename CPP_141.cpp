int digitCount = 0;
    int dotCount = 0;
    int dotIndex = -1;
    string validExtensions[] = {"txt", "exe", "dll"};

    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digitCount++;
        } else if (file_name[i] == '.') {
            dotCount++;
            dotIndex = i;
        }
    }

    if (digitCount > 3 || dotCount != 1 || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return "No";
    }

    string extension = file_name.substr(dotIndex + 1);
    bool validExtension = false;
    for (int i = 0; i < 3; i++) {
        if (extension == validExtensions[i]) {
            validExtension = true;
            break;
        }
    }

    if (!validExtension) {
        return "No";
    }

    if ((file_name[0] < 'a' || file_name[0] > 'z') && (file_name[0] < 'A' || file_name[0] > 'Z')) {
        return "No";
    }

    return "Yes";
}