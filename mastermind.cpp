#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    vector<int> codeCount(6);
    vector<int> guessCount(6);

    // count the occurrences of each character in both strings
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    for (char c : guess) {
        guessCount[c - 'A']++;
    }

    // count the correct positions
    int blackCount = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeCount[code[i] - 'A']--;
            guessCount[guess[i] - 'A']--;
            blackCount++;
        }
    }

    // count the correct colors in wrong positions
    for (int i = 0; i < 6; i++) {
        int count = min(codeCount[i], guessCount[i]);
        white += count;
        codeCount[i] -= count;
        guessCount[i] -= count;
    }

    black = blackCount;
    white = accumulate(codeCount.begin(), codeCount.end(), 0) + accumulate(guessCount.begin(), guessCount.end(), 0) - black;

    return {black, white};
}

int main() {
    string code, guess;
    cin >> code >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << result.second << endl;
    cout << result.first << endl;
    return 0;
}