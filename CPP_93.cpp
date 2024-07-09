// Complete the function
    for (char &c : message) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                if (isupper(c)) {
                    c = toupper((c - 'A' + 2) % 26 + 'A');
                } else {
                    c = tolower((c - 'a' + 2) % 26 + 'a');
                }
            } else {
                if (isupper(c)) {
                    c = tolower(c);
                } else {
                    c = toupper(c);
                }
            }
        }
    }
    
    return message;
}