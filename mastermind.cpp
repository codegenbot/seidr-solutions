int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount, guessCount;

    for(int i=0; i<4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }

    for(int i=0; i<6; i++) {
        if(codeCount[char('A'+i)] > 0 && guessCount[char('A'+i)] > 0) {
            count += min(codeCount[char('A'+i)], guessCount[char('A'+i)]);
        }
    }

    return 4 - count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}