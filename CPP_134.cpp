if (txt.empty()) {
        return false;
    }

    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        size_t lastSpacePos = txt.find_last_of(' ');
        if (lastSpacePos == string::npos) {
            return true;
        } else {
            return lastSpacePos > txt.find_last_not_of(' ');
        }
    }

    return false;
}