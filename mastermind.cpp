using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            continue;
        }
        for (char c : codeCount) {
            if (c.second > 0 && c.first == guess[i]) {
                white++;
                codeCount[c.first]--;
                break;
            }
        }
    }

    return black + white;
}