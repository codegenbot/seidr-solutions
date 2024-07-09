string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = ((c - base + 2) % 26) + base;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                c = 'z' - 'a' + c; // replace vowel with the letter that appears 2 places ahead
        }
        result += c;
    }
    return result;
}