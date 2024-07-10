#include <iostream>
#include <string>

int bowling(std::string input) {
    int score = 0;
    int roll = 0;
    bool lastRoll = false;

    for (int i = 0; i < input.length(); i += 2) {
        std::string rollString = input.substr(i, 1);
        int strikeOrSpare = rollString[0] - '0';
        
        if (strikeOrSpare == 10) {
            score += strikeOrSpare;
            if (!lastRoll) {
                i++;
                i++;
                roll = 2;
            } else {
                lastRoll = true;
            }
        } 
        else if (i + 1 < input.length()) {
            std::string spare = input.substr(i, 2);
            int strikeOrSpareInSpare = spare[0] - '0';
            strikeOrSpareInSpare += spare[1] - '0';
            score += strikeOrSpare;
            if (!lastRoll) {
                i++;
                i++;
                roll = 3;
            } else {
                lastRoll = true;
            }
        } 
        else {
            rollString = input.substr(i, 1);
            int strikeOrSpareInStrike = rollString[0] - '0';
            score += strikeOrSpare + strikeOrSpareInStrike;
        }

        score += roll;
    }

    return score;