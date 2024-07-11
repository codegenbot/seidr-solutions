int cnt = 0;
    for (const string& str : lst) {
        for (char c : str) {
            if (c == '(') {
                cnt++;
            } else {
                if (cnt == 0) {
                    return "No";
                }
                cnt--;
            }
        }
    }
    return (cnt == 0) ? "Yes" : "No";
}