int cnt = 0;
    for (char c : str) {
        cnt += (c == '[' ? 1 : -1);
        if (cnt < 0) return true;
    }
    return false;
}