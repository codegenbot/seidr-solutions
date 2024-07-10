#include <iostream>
#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    int i = 0;
    
    while (i < input.length()) {
        if (input[i] == 'X') {
            score += 10 + getBonus(input, ++i);
        } else if (input.substr(i, 1) == " ")) {
            if (input.substr(i+1, 2) == "X") {
                score += 10 + getBonus(input, i+2);
                i++;
            } else {
                int strike = stoi(input.substr(i+1, 1));
                score += 10 + strike;
                i+=2;
            }
        } else if (stoi(input.substr(i, 1)) == 0) {
            score += 0;
            i += 1;
        } else {
            int framescore = 0;
            for(int j=0; j<2 && i < input.length(); j++, i++) {
                framescore += stoi(input.substr(i, 1));
            }
            if (framescore > 10) {
                score += getBonus(input, i);
            } else {
                score += framescore;
            }
        }
    }
    
    return score;
}

int getBonus(std::string input, int i) {
    int bonus = 0;
    for(int j=0; j<2 && i < input.length(); j++, i++) {
        bonus += stoi(input.substr(i, 1));
    }
    return bonus;
}