int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'X' || (s[i] == '/' && s[i+1] == 'X')){
            score += 10 + ((frame < 9) ? getExtraPin(frame, &s, i) : 0);
            frame++;
            i++; // skip the '/' or 'X'
        }
        else if(s[i] == '/'){
            int pins = s[i-1] - '0' + s[i+1] - '0';
            score += (pins > 10) ? 10 : pins;
            frame++;
        }
        else{
            int pins = s[i] - '0';
            if(frame < 9 && s[i+1] == 'X'){
                score += (frame == 9) ? 10 + getExtraPin(8, &s, i) : pins + 10;
                frame++;
                i++; // skip the 'X'
            }
            else{
                score += pins;
                frame++;
            }
        }
    }
    return score;
}

int getExtraPin(int index, string* s, int* i){
    for(; *i < s->length(); (*i)++){
        if((*s)[*i] == 'X' || (*s)[*i] == '/'){
            return 10 - (index == 8) ? 5 : 0;
        }
        else{
            return (*s)[*i] - '0';
        }
    }
    return 0;
}