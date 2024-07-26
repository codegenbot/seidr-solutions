int n = str.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '[') {
            cnt++;
        } else if (str[i] == ']' && cnt > 0) {
            cnt--;
        }
    }
    return cnt < n && cnt > 0;
}