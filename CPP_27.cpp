for (int i = 0; i < str.size(); ++i) {
        if(str[i] == ' ') continue;
        if(i % 2 == 0) {
            if (islower(str[i])) {
                str[i] = toupper(str[i]);
            }
        } else {
            if (isupper(str[i])) {
                str[i] = tolower(str[i]);
            }
        }
    }