string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            if (isupper(c)) {
                c = 'a' + (c - 'A');
            } else {
                c = 'A' + (c - 'a');
            }
            switch (tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u': {
                    c = (((c - 'a') % 26) + 2) % 26 + 'a';
                    break;
                }
            }
        }
        result += c;
    }
    return result;
}