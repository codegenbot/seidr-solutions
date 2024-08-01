int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
            codeCount[code[i]]--;
        }
    }

    for (auto& pair : codeCount) {
        while(pair.second > 0) {
            if(code.find(guess[i++]) != string::npos){
                --pair.second;
                --count;
            } else{
                break;
            }
        }
    }

    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << "\n";
    cout << whitePegs(code, guess) << "\n";
    return 0;