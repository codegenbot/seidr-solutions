string encode(string message) {
    string vowels = "aeiouAEIOU";
    string replacements = "cgkqwCGKQW";
    for (char &ch : message) {
        if (isalpha(ch)) {
            if (islower(ch)) ch = toupper(ch);
            else ch = tolower(ch);
            size_t pos = vowels.find(ch);
            if (pos != string::npos) {
                ch = replacements[pos];
            }
        }
    }
    return message;
}