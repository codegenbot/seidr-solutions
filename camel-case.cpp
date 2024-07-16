std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;
    int lastSpaceIndex = 0;

    for (char c : str) {
        if (c == '-') {
            // Add space to previous group and reset capitalizeNext flag
            if (lastSpaceIndex != -1) {
                result += ' ';
                capitalizeNext = true;
            }
            lastSpaceIndex = str.find(c);
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}