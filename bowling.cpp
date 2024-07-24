int bowlingScore(string s) {
    int score = 0;
    for(int i=0; i<10; i++){
        if(s[i] == 'X'){
            score += 30;
        }
        else if(s[i] == '/'){
            score += 10 + (s[i+1] - '0') * 10 + (s[i+2] - '0');
            i++;
        }
        else{
            int sum = 0;
            for(int j=i; j<i && j<10; j++){
                if(s[j] == 'X'){
                    sum += 30;
                    break;
                }
                else if(s[j] == '/'){
                    sum += 10 + (s[j+1] - '0') * 10 + (s[j+2] - '0');
                    i++;
                    j++;
                    break;
                }
                else{
                    sum += s[j] - '0';
                }
            }
            score += sum;
        }
    }
    return score;
}