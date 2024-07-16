#include <vector>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<char> codeVector(code.begin(), code.end());
    vector<char> guessVector(guess.begin(), guess.end());

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            codeVector[i] = '\0';
            guessVector[i] = '\0';
        }
    }

    for(int i = 0; i < 4; i++) {
        if(find(codeVector.begin(), codeVector.end(), guess[i]) != codeVector.end()) {
            white++;
            codeVector.erase(remove(codeVector.begin(), codeVector.end(), guess[i]), codeVector.end());
        }
    }

    return {black, white};
}