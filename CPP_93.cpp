string encode(string message){
    string result = "";

    for (int i = 0; i < message.length(); i++) {
        char c = message[i];

        if (isalpha(c)) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2;
            }
        }

        result += c;
    }

    return result;
}