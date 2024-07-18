int boredom = 0;
    bool isI = false;
    for (char c : S) {
        if (c == 'I') {
            isI = true;
        } else if ((c == '.' || c == '?' || c == '!') && isI) {
            boredom++;
            isI = false;
        }
    }
    if (isI) {
        boredom++;
    }
    return boredom;
}