int black_pegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int white_pegs(string code, string guess) {
    int count = 0;
    map<char, int> freq_code, freq_guess;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            freq_code[code[i]]++;
        } else {
            freq_code[code[i]]++;
            freq_guess[guess[i]]++;
        }
    }
    
    for (auto it = freq_guess.begin(); it != freq_guess.end(); ++it) {
        if (freq_code.find(it->first) != freq_code.end()) {
            count += min(it->second, freq_code[it->first]);
        }
    }
    
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    cout << white_pegs(code, guess) << endl;
    cout << black_pegs(code, guess) << endl;
    
    return 0;
}