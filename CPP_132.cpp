int cnt = 0;
    for (char c : str) {
        if (c == '[') {
            cnt++;
        }
        else if (c == ']' && cnt > 0) {
            cnt--;
        }
    }
    return cnt < 0;
}