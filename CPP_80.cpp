bool is_happy(string s) {
    if (s.length() < 3)
        return false;

    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool distinct = true;
        for (char c : sub) {
            int count = 0;
            for (int j = 0; j < sub.length(); j++) {
                if (sub[j] == c)
                    count++;
            }
            if (count > 1) {
                distinct = false;
                break;
            }
        }
        if (!distinct)
            return false;
    }

    return true;
}