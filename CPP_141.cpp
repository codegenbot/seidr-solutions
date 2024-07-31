int digits = 0;
    int dotIndex = -1;
    for (int i = 0; i < file_name.length(); ++i) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digits++;
        }
        if (file_name[i] == '.') {
            if (dotIndex != -1) {
                return "No";
            }
            dotIndex = i;
        }
    }
    if (digits > 3 || dotIndex == -1 || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return "No";
    }
    string prefix = file_name.substr(0, dotIndex);
    string suffix = file_name.substr(dotIndex + 1);
    if (!(isalpha(prefix[0]) && (suffix == "txt" || suffix == "exe" || suffix == "dll"))) {
        return "No";
    }
    return "Yes";
}