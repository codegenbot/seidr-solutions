int bowlingScore(string str) {
    int score = 0;
    int frame = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'X') {
            score += 10 + nextFrameBonus();
            frame++;
        } else if(str[i] == '/') {
            int pins1 = nextPins();
            int pins2 = nextPins();
            if(pins1 + pins2 == 10) {
                score += pins1 + pins2;
            } else {
                score += pins1 + pins2;
            }
            frame++;
        } else {
            int pins1 = str[i] - '0';
            int pins2 = nextPins();
            if(pins1 + pins2 == 10) {
                score += pins1 + pins2;
            } else {
                score += pins1 + pins2;
            }
            frame++;
        }
    }

    return score;
}

int nextFrameBonus() {
    int str = "";
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'X') {
            continue;
        } else if(str[i] == '/') {
            break;
        } else {
            str += str[i];
        }
    }
    return (str[0] - '0') * 10 + (str[1] - '0');
}

int nextPins() {
    int str = "";
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'X' || str[i] == '/') {
            break;
        } else {
            str += str[i];
        }
    }
    return (str[0] - '0') * 10 + (str[1] - '0');
}