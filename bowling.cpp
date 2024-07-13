int score(string s) {
    int result = 0;
    int frame = 1;
    int i = 0;
    
    while (frame <= 10 && i < s.length()) {
        if (s[i] == 'X') {
            result += 10;
            if (s[i+2] == 'X') {
                result += 10 + (s[i+4] == 'X' ? 10 : (s[i+4] - '0'));
            } else {
                result += (s[i+2] == '/' ? 10 : (s[i+2] - '0') + (s[i+4] == '/' ? 10 : (s[i+4] - '0')));
            }
            i += 2;
        } else if (s[i+1] == '/') {
            result += 10;
            result += (s[i+2] == 'X' ? 10 : (s[i+2] - '0'));
            i += 3;
        } else {
            result += (s[i] == '-' ? 0 : (s[i] - '0')) + (s[i+1] == '-' ? 0 : (s[i+1] - '0'));
            i += 2;
        }
        frame++;
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}