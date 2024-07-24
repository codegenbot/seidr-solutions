std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-' || c == ' ') {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += c;
            }
        } else {
            result += (capitalizeNext ? toupper : tolower)(c);
            capitalizeNext = true;
        }
    }

    return result;
}