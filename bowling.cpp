} else {
            total += s[i] - '0';

            total += (isSpare ? s[i] - '0' : 0);
            total += (isStrike ? (s[i] == 'X' ? 10 : s[i] - '0') : 0);

            isSpare = false;
            isStrike = false;

            if (frame < 10) {
                if (isSpare) {
                    total += s[i + 1] - '0';
                } else if (isStrike) {
                    total += (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
                }
            }

            frame++;
        }