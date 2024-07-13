int score(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            total += 10;
            total += ((i+1 < s.size()) ? ((s[i+2] == '/') ? 10 : (isdigit(s[i+1]) ? s[i+1]-'0' : 10)) : ((i+1 < s.size()) ? (isdigit(s[i+1]) ? s[i+1]-'0' : 0) : 0));
            ++frame;
        } else if (s[i] == '/') {
            total += 10 - (s[i-1]-'0');
            total += (i+1 < s.size()) ? (isdigit(s[i+1]) ? s[i+1]-'0' : 10) : 0;
            ++frame;
        } else if (isdigit(s[i])) {
            total += s[i]-'0';
            if (i+1 < s.size() && isdigit(s[i+1])) {
                total += s[i+1]-'0';
                if (total == 10) {
                    total += (i+2 < s.size()) ? (isdigit(s[i+2]) ? s[i+2]-'0' : 0) : 0;
                }
                ++i;
            }
            ++frame;
        }
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}