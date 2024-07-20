int boredom = 0;
    string word = "";
    for (char c : S) {
        if (c == ' ' && word == "I") boredom++;
        if (c == '.' || c == '?' || c == '!') word = "";
        else if (c != ' ') word += c;
    }
    return boredom;
}