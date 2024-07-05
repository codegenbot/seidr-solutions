string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            if (strchr("aeiouAEIOU", c)) {
                if (c == 'a') c = 'C';
                else if (c == 'e') c = 'G';
                else if (c == 'i') c = 'K';
                else if (c == 'o') c = 'Q';
                else if (c == 'u') c = 'W';
                else if (c == 'A') c = 'c';
                else if (c == 'E') c = 'g';
                else if (c == 'I') c = 'k';
                else if (c == 'O') c = 'q';
                else if (c == 'U') c = 'w';
            }
        }
        result += c;
    }
    return result;
}