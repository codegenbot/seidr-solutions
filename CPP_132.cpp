int n = str.length();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '[') {
            cnt++;
        } else if (str[i] == ']') {
            if (cnt > 0) {
                cnt--;
            }
        }
    }
    return (n - cnt * 2) > 2;
}