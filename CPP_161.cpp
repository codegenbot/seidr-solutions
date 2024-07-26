for (char &c : s) {
        if (isalpha(c)) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
        }
    }

    if (count_if(s.begin(), s.end(), isalpha) == 0) {
        reverse(s.begin(), s.end());
    }

    return s;
}