int count_upper(string s) {
    int count = 0;
    for (int i = 1; i < s.length(); i += 2) {
        if (isupper(s[i])) {
            switch (s[i]) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    count++;
            }
        }
    }
    return count;
}