if (txt.empty()) {
        return false;
    }

    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        int i = txt.size() - 2;
        while (i >= 0 && txt[i] != ' ') {
            i--;
        }
        if (i < 0 || i == txt.size() - 2) {
            return true;
        }
    }

    return false;
}