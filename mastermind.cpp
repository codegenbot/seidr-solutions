#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeCount;
    map<char, int> guessCount;

    for(char c : code) {
        codeCount[c]++;
    }

    for(char c : guess) {
        guessCount[c]++;
    }

    for(int i = 0; i < 6; i++) {
        char ch = (char)(i + 'A');
        int codeCountVal = codeCount.count(ch);
        int guessCountVal = guessCount.count(ch);

        if(code[i] == ch) {
            black++;
            if(codeCountVal > 1) {
                white += codeCountVal - 1;
            }
        } else {
            for(int j = 0; j < 4; j++) {
                if(guess[j] == ch && code.find(ch) != string::npos) {
                    white++;
                    break;
                }
            }
        }
    }

    return black + white;
}