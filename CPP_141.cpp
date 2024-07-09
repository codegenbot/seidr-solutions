int digits = 0;
    int dotIndex = -1;
    for (int i = 0; i < file_name.length(); ++i) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digits++;
        }
        else if (file_name[i] == '.') {
            if (dotIndex != -1) {
                return "No";
            }
            dotIndex = i;
        }
    }
    
    if (digits > 3 || dotIndex == -1 || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return "No";
    }
    
    string beforeDot = file_name.substr(0, dotIndex);
    string afterDot = file_name.substr(dotIndex + 1);

    if (!(beforeDot[0] >= 'a' && beforeDot[0] <= 'z') && !(beforeDot[0] >= 'A' && beforeDot[0] <= 'Z')) {
        return "No";
    }

    if (afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return "No";
    }

    return "Yes";
}