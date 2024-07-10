string result = "";
    for (char c : str) {
        if (islower(c)) {
            result += toupper(c);
        } else {
            result += tolower(c);
        }
    }
    return result;
}