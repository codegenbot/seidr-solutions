if (txt.empty()) return false;
    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        size_t pos = txt.find_last_of(" ");
        return pos == string::npos || pos == txt.size() - 1;
    }
    return false;
}