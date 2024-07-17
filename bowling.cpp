#include <vector>
#include <string>

int bowlingScore(std::string rounds) {
    int score = 0;
    int currentRound = 0;
    int rollsLeftInRound = 2;

    std::vector<int> rolls;

    for (char c : rounds) {
        if (c == '/') {
            int roll1, roll2;
            sscanf(&rounds[rolls.size() * 3 - 4], "%d/%d", &roll1, &roll2);
            if (roll1 + roll2 >= 10) {
                score += roll1 + roll2;
            } else {
                rolls.push_back(roll1);
                rollsLeftInRound = 1;
            }
        } else {
            int roll = c - '0';
            rolls.push_back(roll);

            if (--rollsLeftInRound == 0) {
                currentRound++;
                score += calculateScoreForRound(rolls);
                rolls.clear();
                rollsLeftInRound = 2;
            }
        }
    }

    return score;
}

int calculateScoreForRound(const std::vector<int>& rolls) {
    int score = 0;

    if (rolls.size() == 1) {
        return rolls[0];
    } else if (rolls.size() == 2) {
        return rolls[0] + rolls[1];
    } else {
        int firstRoll = rolls[0] + rolls[1];
        int secondRoll = rolls[2];

        score += firstRoll;
        score += secondRoll;

        return score;
    }
}