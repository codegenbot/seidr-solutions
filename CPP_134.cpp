if (txt.empty()) return false;
    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        size_t lastSpacePos = txt.find_last_of(' ');
        if (lastSpacePos == string::npos) return true;
        for (size_t i = lastSpacePos + 1; i < txt.size(); ++i) {
            if (!isalpha(txt[i])) return true;
        }
    }
    return false;
}