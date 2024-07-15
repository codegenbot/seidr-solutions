int count = 0;
    for (char bracket : str) {
        if (bracket == '[') {
            count++;
        } else if (bracket == ']' && count > 0) {
            count--;
        }
    }
    return count < 0 || count > 0 ? true : false;
}