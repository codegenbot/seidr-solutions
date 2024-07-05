string encode(string message) {
    for (char &ch : message) {
        if (isalpha(ch)) {
            if (isupper(ch)) 
                ch = tolower(ch);
            else 
                ch = toupper(ch);
            
            switch (tolower(ch)) {
                case 'a': ch = toupper(ch) ? 'C' : 'c'; break;
                case 'e': ch = toupper(ch) ? 'G' : 'g'; break;
                case 'i': ch = toupper(ch) ? 'K' : 'k'; break;
                case 'o': ch = toupper(ch) ? 'Q' : 'q'; break;
                case 'u': ch = toupper(ch) ? 'W' : 'w'; break;
            }
        }
    }
    return message;
}