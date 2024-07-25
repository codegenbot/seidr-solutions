int opened = 0;
    for (char c : str) {
        if (c == '[') {
            opened++;
        } else if (c == ']' && opened > 0) {
            opened--;
        }
    }
    return opened < 0 ? true : false;
}