```
string str = "";
for (char c : text) {
    if (!isalpha(c)) {
        str += c;
    } else if (!ispunct(c) && !istitle(c)) {
        str += tolower(c);
        bool isVowel = false;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            isVowel = true;
        }
        for (char d : text) {
            if (isalpha(d)) {
                if (!ispunct(d) && !istitle(d) && 
                    (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u')) {
                    isVowel = true;
                    break;
                }
            }
        }
        if (!isVowel) {
            str += tolower(c);
        }
    } else {
        str += c;
    }
}
return str;