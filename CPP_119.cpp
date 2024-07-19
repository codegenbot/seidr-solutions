int cnt = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                cnt++;
            } else {
                if (cnt > 0) {
                    cnt--;
                } else {
                    return "No";
                }
            }
        }
    }
    return (cnt == 0) ? "Yes" : "No";
}