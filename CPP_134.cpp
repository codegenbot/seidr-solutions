if (txt.empty()) return false;
    char lastChar = txt.back();
    return isalpha(lastChar) && !isalnum(*(txt.end() - 2));
}