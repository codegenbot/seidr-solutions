#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<char> possible_chars = {'0', '1', '2', '3', '4', '5'};

    unordered_map<char, int> count_map;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 6; j++) {
            if(guess[i] == possible_chars[j][0]) {
                count_map[guess[i]]++;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        if(count_map[code[i]] > 0) {
            white--;
            count_map[code[i]]--;
        }
    }

    return black + white;
}