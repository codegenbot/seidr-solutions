#include <string>
using namespace std;

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap, guessMap;

    // Count the frequency of each character in both strings
    for (int i = 0; i < 4; ++i) {
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
    }

    // For each unique character in the code string, subtract the count in the guess string
    // and increment the white peg count if the difference is greater than zero
    for (auto& pair : codeMap) {
        if (pair.second > 0 && guessMap[pair.first] < pair.second) {
            count += pair.second - guessMap[pair.first];
        }
    }

    return count;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the guess: ";
    cin >> guess;
    
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << white << endl;
    cout << black << endl;

    return 0;
}