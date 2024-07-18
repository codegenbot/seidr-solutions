string solve(string s) {
    int count = 0;
    for (char c : s) {
        if (isalpha(c) && isupper(c)) {
            count++;
        }
    }
    
    return to_string(count);
}