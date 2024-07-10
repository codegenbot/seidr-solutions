int bowlingScore(string str) {
    int score = 0;
    int frame = 1;
    for (char c : str) {
        if (c == 'X') {
            score += 10 + (frame < 10 ? getBonus(frame, str) : 0);
            frame++;
        } else if (c == '/') {
            int pins = 10 - (str[str.find('/')] - '0' + str[str.find('/', str.find('/'))] - '0');
            score += 10 - pins;
            frame++;
        } else {
            int pins = c - '0';
            if (frame < 9 && str[str.find('.') - 1] == '/') {
                pins += getBonus(frame, str);
            }
            score += pins;
            if (pins < 10) {
                frame++;
            }
        }
    }
    return score;
}

int getBonus(int frame, string str) {
    int bonus = 0;
    for (int i = str.find('.') + 1; i < str.size(); i++) {
        if (str[i] == 'X') {
            bonus += 10;
            break;
        } else if (str[i] == '/') {
            bonus += 10 - (str[str.find('/', i)] - '0' + str[str.find('/', i, str.find('/', i))] - '0');
            break;
        }
    }
    return bonus;
}