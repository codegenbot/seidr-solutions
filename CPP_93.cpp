string encode(string message){
        for (char& c : message) {
            if (isalpha(c)) {
                c = islower(c) ? toupper(c) : tolower(c);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    c = c + 2;
                }
            }
        }
        return message;
    }