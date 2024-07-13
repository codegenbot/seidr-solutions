int mastermind(string code, string guess) {
    vector<char> chars = {'0', '1', '2', '3', '4', '5'};
    
    int black = 0;
    int white = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = chars[6];
            guess[i] = chars[6];
        }
    }

    vector<int> codeCount(6, 0);
    for(int i = 0; i < 4; i++) {
        int j = 0;
        while(j < 6 && chars[j] != code[i]) j++;
        codeCount[j]++;
    }

    for(int i = 0; i < 4; i++) {
        int count = 0;
        int idx = 0;
        for (char c : chars) {
            if (c == code[i]) break;
            idx++;
        }
        for(int j = 0; j < 6; j++) {
            if(code[j] == guess[i]) {
                count++;
                codeCount[idx]--;
                if(count > 1) break;
            }
        }
        white += min(count, codeCount[idx]);
    }

    return black + white;
}