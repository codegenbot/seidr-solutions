std::string anti_shuffle(std::string s) {
    std::string result = "";
    int lastSpace = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
            lastSpace = i;
        } else {
            while (i > lastSpace) {
                result += s[lastSpace];
                lastSpace++;
            }
            result += s[i];
        }
    }
    return result;
}