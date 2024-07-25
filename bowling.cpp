int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(21);
    
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '/') {
            if(roll < 2) {
                int frame;
                try{
                    frame = stoi(s.substr(i-1, i));
                    i++;
                }catch(...){
                    frame = 10;
                }
                
                for(int j=0; j<frame; j++) {
                    rolls[roll] += 10;
                    roll++;
                }
            }
        } else if(s[i] == 'X') {
            rolls[roll] = 10;
            roll +=1;
        } else {
            int frameScore = 0;
            try{
                frameScore = stoi(s.substr(i, s.find('/', i)-i));
                i = s.find('/', i);
            }catch(...){
                frameScore = 10 -stoi(s.substr(i-1, i-1));
                i++;
            }
            
            if(frameScore < 10) {
                rolls[roll] = frameScore + stoi(s.substr(i, 1));
                roll +=2;
            } else {
                rolls[roll] = frameScore;
                roll +=1;
            }
        }
    }
    
    for(int i=0; i<21; i++) {
        score += rolls[i];
    }
    
    return score;
}