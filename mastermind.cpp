#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; j++) {
                if (guess[j] == code[i] && i != j) {
                    white++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                int k = i;
                while (k < 4) {
                    if (code[k] == guess[i]) {
                        white++;
                        code[k] = 'x';
                        black++;
                        break;
                    }
                    k++;
                }
            }
        }
    }

    return std::make_pair(white, black).second;
}