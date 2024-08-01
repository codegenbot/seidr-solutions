#include <vector>
using namespace std;

int whitePegs(string code, string guess) {
    int white = 0;
    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);

    // count the occurrences of each color in code and guess
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    for (char c : guess) {
        guessCount[c - 'A']++;
    }

    // count white pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i]) {
            int codeIndex = code[i] - 'A';
            int guessIndex = guess[i] - 'A';
            if (codeCount[codeIndex] > 0 && guessCount[guessIndex] > 0) {
                white++;
                codeCount[codeIndex]--;
                guessCount[guessIndex]--;
            }
        }
    }

    return white;
}

int blackPegs(string code, string guess) {
    int black = 0;

    // count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;

    return 0;
}