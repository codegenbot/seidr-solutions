string encode(string message){
    for (char &ch : message) {
        if (isalpha(ch)) {
            // Swap case
            if (islower(ch)) {
                ch = toupper(ch);
            } else {
                ch = tolower(ch);
            }

            // Replace vowels
            switch (tolower(ch)) {
                case 'a': ch = (isupper(ch) ? 'C' : 'c'); break;
                case 'e': ch = (isupper(ch) ? 'G' : 'g'); break;
                case 'i': ch = (isupper(ch) ? 'K' : 'k'); break;
                case 'o': ch = (isupper(ch) ? 'Q' : 'q'); break;
                case 'u': ch = (isupper(ch) ? 'W' : 'w'); break;
            }
        }
    }
    return message;
}