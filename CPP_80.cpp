bool is_happy(string s) {
    for (int i = 0; i <= s.length() - 3; i++) {
        string sub = s.substr(i, 3);
        bool unique = true;
        for (char c : sub) {
            int count = 0;
            for (char d : sub) {
                if (c == d)
                    count++;
            }
            if (count > 1) {
                return false; 
            }
        }
    }
    return true;
}