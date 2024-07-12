int main() {
    string input;
    cin >> input;
    
    int score = 0;
    int frames = 10;
    
    for (int i = 0; i < input.size(); ++i) {
        if (frames == 0) break;
        
        if (input[i] == 'X') {
            score += 10;
            if (input[i+1] == 'X') {
                score += 10;
                if (input[i+2] == 'X') score += 10;
                else if (input[i+2] == '-') score += 0;
                else score += input[i+2] - '0';
            } else if (input[i+1] == '/') {
                score += 10;
                score += 10 - (int)(input[i+2]-'0');
            } else {
                score += input[i+1] - '0';
                score += input[i+2] - '0';
            }
            
            frames--;
        } else if (input[i] == '/') {
            score += 10 - (int)(input[i-1]-'0');
            score += input[i+1] == 'X' ? 10 : input[i+1]-'0';
            
            frames--;
        } else if (input[i] == '-') {
            score += 0;
        } else {
            score += input[i] - '0';
        }
    }
    
    cout << score << endl;
    
    return 0;
}