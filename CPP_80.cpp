bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool unique_chars = true;
        for (char c : set<string>(sub.begin(), sub.end())) { 
            int count = 0;
            for (char d : s) {
                if (c == d)
                    count++;
            }
            if (count > 1) {
                unique_chars = false;
                break;
            }
        }
        if (!unique_chars)
            return false;
    }
    return true;
}