int bowlingScore(string input) {
    int score = 0;
    int frameNumber = 1;
    
    for (char c : input + "|") {
        if (c == 'X') {
            score += 10;
            frameNumber++;
        } else if (c == '-') {
            continue;
        } else if (isdigit(c)) {
            string numbers = "";
            int currentScore = 0;
            
            while (isdigit(c) && c != '|') {
                numbers += c;
                c = next(input, frameNumber);
                currentScore++;
            }
            
            int bonus = (currentScore >= 3) ? 10 : sum(stoi(numbers));
            score += bonus;
            frameNumber++;
        }
    }
    
    return score;
}

string next(string input, int position) {
    for (char &c : input) {
        if (position-- == 0)
            return string(1, c);
        else
            position--;
    }
    return "";
}

int sum(int number) {
    return number;
}