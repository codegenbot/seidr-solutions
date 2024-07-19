bool is_nested(const string& str) {
    int n = str.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '[') {
            count++;
        } else if (str[i] == ']' && count > 0) {
            count--;
        }
    }
    return count == 0;
}