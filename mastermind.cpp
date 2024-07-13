int getHint(string guess, string answer) {
    int white = 0;
    int black = 0;

    vector<char> guessArray(guess.begin(), guess.end());
    vector<char> answerArray(answer.begin(), answer.end());

    for (int i = 0; i < 4; ++i) {
        if (guessArray[i] == answerArray[i]) {
            ++black;
            guessArray[i] = '\0';
            answerArray[i] = '\0';
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (!isalpha(guessArray[i])) continue;

        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (guessArray[i] == answerArray[j]) {
                ++count;
                answerArray[j] = '\0';
            }
        }

        white += count - black;
    }

    return to_string(white).append("\n").append(to_string(black));
}