```c
#include <string>
#include <unordered_map>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    unordered_map<char, int> code_count;
    for (char c : code) {
        code_count[c]++;
    }

    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code_count[code[i]]--;
        }
    }

    for(int i=0; i<6; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == char(i+'A')) {
                count++;
                code_count[char(i+'A')]--;
            }
        }
        while(count > 0 && code_count[char(i+'A')] < count) {
            count--;
        }
        white += count;
    }

    return black;
}