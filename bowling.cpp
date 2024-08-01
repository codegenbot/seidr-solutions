if (s[i+2] == 'X' && (s.size() <= i + 4 || s[i+4] == 'X')) {
                score += 20;
            } else if (s[i+2] == 'X') {
                score += 10;
                if (s[i+3] == 'X') {
                    score += 10;
                    if (s.size() > i + 4) {
                        score += (s[i+4] == 'X' ? 10 : s[i+4] == '/' ? 10 : s[i+4] - '0');
                    }
                } else {
                    score += (s[i+3] == '/' ? 10 : s[i+3] - '0');
                }
            }