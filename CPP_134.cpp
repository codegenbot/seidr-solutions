if (txt.empty()) return false;
    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        int pos = txt.find_last_of(" ");
        if (pos == string::npos) {
            return true;
        }
        for (int i = pos + 1; i < txt.size(); i++) {
            if (!isalnum(txt[i])) {
                return true;
            }
        }
    }
    return false;
}