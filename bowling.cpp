int bowlingScore(string str) {
    int score = 0;
    bool strike = false;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'X') {
            score += 10 + (strike ? 10 : 0);
            strike = true;
        } else if(str[i] == '/') {
            int nextTwo = stoi(str.substr(i+1, 2));
            score += nextTwo;
            i+=1; // increment i to skip the '/' character
        } else {
            int single = str[i] - '0';
            score += single;
        }
    }
    return score;
}