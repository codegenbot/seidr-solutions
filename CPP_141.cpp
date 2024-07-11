int digitCount = 0;
    int dotIndex = -1;

    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digitCount++;
            if (digitCount > 3) {
                return "No";
            }
        } else if (file_name[i] == '.') {
            if (dotIndex == -1) {
                dotIndex = i;
            } else {
                return "No";
            }
        }
    }

    if (dotIndex == -1 || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return "No";
    }

    string extension = file_name.substr(dotIndex + 1);
    string validExtensions[] = {"txt", "exe", "dll"};
    for (const auto &ext : validExtensions) {
        if (extension == ext) {
            if ((file_name[0] >= 'a' && file_name[0] <= 'z') || (file_name[0] >= 'A' && file_name[0] <= 'Z')) {
                return "Yes";
            }
        }
    }

    return "No";
}