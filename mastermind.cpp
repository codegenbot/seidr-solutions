int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> freq;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            freq[code[i]]++;
            freq[guess[i]]--;
        }
    }

    for (auto& p : freq) {
        count += max(p.second, 0);
    }

    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << "\n" << blackPegs(code, guess) << endl;
    return 0;
}