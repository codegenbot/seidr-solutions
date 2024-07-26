int count = 0;
    for (char bracket : str) {
        if (bracket == '[') {
            count++;
        } else if (bracket == ']' && count > 0) {
            count--;
        }
    }
    return count < str.size() && count > 0;
}