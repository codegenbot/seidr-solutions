#include <vector>
using namespace std;

int getBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int getWhitePegs(string code, string guess) {
    int whitePegs = 0;
    vector<char> codeCount(6, 0);
    for (char c : code) {
        ++codeCount[c];
    }

    for (int i = 0; i < 4; ++i) {
        char c = guess[i];
        if (c == code[i]) {
            --codeCount[c];
        }
        else if (codeCount[c] > 0) {
            ++whitePegs;
            --codeCount[c];
        }
    }

    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int blackPegs = getBlackPegs(code, guess);
    int whitePegs = getWhitePegs(code, guess);
    cout << whitePegs << endl;
    cout << blackPegs << endl;
    return 0;
}