int bowlingScore(string &s) {
    int score = 0;
    for(int i = 0; i < 10; ++i){
        if(s[i] == '/'){
            string leftPart = s.substr(0, i);
            int rightPart = stoi(s.substr(i+1));
            if(stoi(leftPart) == 10 && leftPart.size() > 1)
                score += 20;
            else
                score += (stoi(leftPart) + rightPart);
        }else{
            score += (s[i] - '0') * (i < 9 ? 2 : 3);
        }
    }
    return score;
}