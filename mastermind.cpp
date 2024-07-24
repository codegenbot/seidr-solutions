int mastermind(const string& code, const string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (char c : code) {
        bool correctColor = false;
        bool correctPlace = false;

        for (int i = 0; i < 4; ++i) {
            if (c == guess[i]) {
                if (guess[i] == c) {
                    blackPegs++;
                    correctPlace = true;
                    break;
                } else {
                    whitePegs++;
                    correctColor = true;
                }
            }
        }

        if (!correctPlace && correctColor) {
            for (int i = 0; i < 4; ++i) {
                if (guess[i] == c && !correctPlace) {
                    --whitePegs;
                    break;
                }
            }
        }
    }

    return {blackPegs, whitePegs};
}