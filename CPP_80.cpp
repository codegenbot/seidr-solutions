```cpp
bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        string temp = s.substr(i, 3);
        bool unique = true;
        for (char c : temp) {
            int count = 0;
            for (char d : temp) {
                if (c == d)
                    count++;
            }
            if (count > 1) {
                unique = false;
                break;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}