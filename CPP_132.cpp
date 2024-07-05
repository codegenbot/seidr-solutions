bool is_nested(string str){
    int n = str.length();
    int depth = 0;
    bool nested = false;

    for (int i = 0; i < n; ++i) {
        if (str[i] == '[') {
            depth++;
        } else if (str[i] == ']') {
            if (depth > 1) {
                nested = true;
            }
            depth--;
        }
    }

    return nested;
}