int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors but wrong positions (white pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else {
            int count = 0;
            for(int j = 0; j < 4; j++) {
                if(code[i] == guess[j]) {
                    count++;
                }
            }
            if(count > 0) white++;
        }
    }

    // Count the number of correct colors and positions (black pegs)
    int codeCount[6] = {0};
    for(int i = 0; i < 4; i++) {
        codeCount[code[i] - 'A']++;
    }
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black--;
        } else {
            int count = codeCount[guess[i] - 'A'];
            if(count > 0) black--;
            codeCount[guess[i] - 'A']--;
        }
    }

    return white, black;
}