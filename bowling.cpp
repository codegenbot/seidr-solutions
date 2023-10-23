#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
class Bowling {
public:
    int score;
    int currentFrame;
    int currentBowl;
    char bowls[12];
    
    Bowling() : score(0), currentFrame(1), currentBowl(0) {
        memset(bowls, 0, sizeof(bowls));
    }
    
    void addScore(int pins) {
        score += pins;
    }
    
    bool isTenthFrame() {
        return currentFrame == 10;
    }
    
    char currentChar() {
        return bowls[currentBowl];
    }
    
    void nextBowl() {
        ++currentBowl;
        if (currentBowl > 10) {
            ++currentFrame;
            currentBowl = 1;
        }
    }
    
    bool isSpare() {
        return currentChar() == '/';
    }
    
    bool isStrike() {
        return currentChar() == 'X';
    }
    
    bool isOpen() {
        return !isStrike() && !isSpare();
    }
    
    bool isHalfFrame() {
        return isSpare() || currentBowl == 2;
    }
    
    int parsePins() {
        int pins = 0;
        if (isOpen()) {
            pins = currentChar() - '0';
        } else if (isSpare()) {
            pins = 10;
            pins -= bowls[currentBowl-1] - '0';
        } else if (isStrike()) {
            pins = 10;
        }
        return pins;
    }
    
    void addBonus() {
        if (isOpen()) {
            addScore(0);
        } else if (isSpare()) {
            addScore(bowling.getPins(currentFrame+1, 1));
        } else if (isStrike()) {
            if (bowling.isStrike(currentFrame+1)) {
                if (bowling.isTenthFrame()) {
                    addScore(bowling.getPins(currentFrame+1, 1));
                    addScore(bowling.getPins(currentFrame+2, 1));
                } else {
                    addScore(bowling.getPins(currentFrame+1, 2));
                }
            } else {
                addScore(bowling.getPins(currentFrame+1, 1));
                addScore(bowling.getPins(currentFrame+1, 2));
            }
        }
    }
};


int parseBowl(char c) {
    int pins = 0;
    if (c == 'X') {
        pins = 10;
    } else if (c == '-') {
        pins = 0;
    } else if (c == '/') {
        pins = 10;
    } else {
        pins = c - '0';
    }
    return pins;
}


int score(string b) {
    int score = 0;
    for (int i = 0; i < b.size(); ++i) {
        score += parseBowl(b[i]);
    }
    return score;
}


int main() {
    //string input;
    //getline(cin, input);
    //cout << score(input) << endl;
    cout << score("XXXXXXXXXXXX") << endl;
    cout << score("9-9-9-9-9-9-9-9-9-9-") << endl;
    cout << score("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << score("7115XXX548/279-X53") << endl;
    cout << score("532/4362X179-41447/5") << endl;
    return 0;
}
