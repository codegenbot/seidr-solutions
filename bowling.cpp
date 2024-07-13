int calculateScore(string input) {
    int score = 0;
    int frame = 1;
    int frameScore = 0;
    int strikeBonus1 = 0, strikeBonus2 = 0;
    int spareBonus = 0;
    bool isSpare = false, isStrike = false;

    for (char bowl : input) {
        if (bowl == 'X') {
            score += 10;
            if (frame < 10) {
                strikeBonus1++;
                strikeBonus2++;
                frame++;
            }
        } else if (bowl == '/') {
            score += 10 - frameScore;
            spareBonus++;
            isSpare = true;
        } else if (bowl == '-') {
            // Do nothing for a miss
        } else {
            int pins = bowl - '0';
            score += pins;
            frameScore += pins;

            if (isSpare) {
                score += spareBonus * pins;
                isSpare = false;
                spareBonus = 0;
            } else if (isStrike) {
                score += strikeBonus1 * pins + strikeBonus2 * pins;
                strikeBonus1--;
                if (strikeBonus1 == 0) {
                    isStrike = false;
                }
            }

            if (frame < 10 && frameScore == 10) {
                frameScore = 0;
                frame++;
            } else if (isStrike) {
                strikeBonus1--;
                if (strikeBonus1 == 0) {
                    isStrike = false;
                }
            }
        }

        if (isStrike) {
            score += strikeBonus1 * 10;
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateScore(input) << endl;
    return 0;
}