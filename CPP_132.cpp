int count = 0;
    for (char c : str) {
        if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return true;
            }
        } else {
            count++;
        }
    }
    return false;
}