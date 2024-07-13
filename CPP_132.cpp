bool is_nested(string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[')
            ++count;
        else if (c == ']')
            --count;
        if (count > 1 || count < -1)
            return true;
    }
    return false;
}