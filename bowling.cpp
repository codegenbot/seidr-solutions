int bowling(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            int first = s.substr(0, i).count('X');
            int second = s.substr(i + 1).find('/'); // find the next '/'
            score += first * 10 + (second != string::npos ? (10 - second) : 10);
            s.erase(0, second == string::npos ? i + 1 : second);
        } else if (s[i] == 'X') {
            score += 10;
            s.erase(0, i + 1);
        } else {
            int sum = 0;
            while (i < 9 && s[i] != '/') {
                sum += s[i] - '0';
                i++;
            }
            if (s[i] == '/') i++; // skip '/'
            score += sum;
        }
    }
    return score;
}