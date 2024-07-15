```cpp
int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        bool found = false;
        for(int j=0; j<4; j++) {
            if(code[j] == guess[i]) {
                found = true;
                break;
            }
        }
        if(found) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int whiteCount = 0;
    for(int i=0; i<4; i++) {
        bool codeFound = false;
        bool guessFound = false;
        char ch = guess[i];
        for(int j=0; j<4; j++) {
            if(code[j] == ch) {
                codeFound = true;
            }
            if(guess[j] == ch) {
                guessFound = true;
            }
        }
        if(codeFound && guessFound) {
            whiteCount++;
        } else if(codeFound || guessFound) {
            if(codeFound) {
                for(int j=0; j<4; j++) {
                    if(code[j] == ch) {
                        whiteCount++;
                        code[j] = '\0'; // mark as found
                        break;
                    }
                }
            } else {
                for(int j=0; j<4; j++) {
                    if(guess[j] == ch) {
                        whiteCount++;
                        guess[j] = '\0'; // mark as found
                        break;
                    }
                }
            }
        }
    }
    return whiteCount;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}