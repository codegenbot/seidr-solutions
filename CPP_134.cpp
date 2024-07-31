if (txt.empty()) {
        return false;
    }

    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        size_t lastSpacePos = txt.find_last_of(' ');
        if (lastSpacePos == string::npos || lastSpacePos == txt.length() - 1) {
            return true;
        }
    }

    return false;
}