int count = 0;
    for (const string& str : lst) {
        for (char c : str) {
            if (c == '(') {
                count++;
            } else {
                if (count == 0) {
                    return "No";
                }
                count--;
            }
        }
    }
    return count == 0 ? "Yes" : "No";
}