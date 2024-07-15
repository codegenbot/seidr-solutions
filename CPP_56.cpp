int cnt = 0;
    for (char ch : brackets) {
        if (ch == '<') {
            cnt++;
        } else if (ch == '>') {
            cnt--;
        }
        if (cnt < 0) {
            return false;
        }
    }
    return cnt == 0;
}