int calculateBowlingScore(string input) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < input.size(); i++) {
        if (frame == 10) {
            break;
        }
        
        if (input[i] == 'X') {
            score += 10;
            if (input[i+2] == 'X') {
                score += 10;
            } else {
                score += (input[i+1] == 'X' ? 10 : input[i+1] - '0');
                score += (input[i+2] == '/' ? 10 - (input[i+1] == 'X' ? 10 : input[i+1] - '0') : input[i+2] - '0');
            }
            frame++;
            continue;
        }
        
        if (input[i] == '/') {
            score += 10 - (input[i-1] == 'X' ? 10 : input[i-1] - '0');
            score += (input[i+1] == 'X' ? 10 : input[i+1] - '0');
            frame++;
            continue;
        }
        
        if (input[i] == '-') {
            continue;
        }
        
        score += input[i] - '0';
        
        if (input[i+1] == '/') {
            score += 10 - (input[i] - '0');
            frame++;
        } else if (input[i+1] == 'X') {
            score += 10;
            frame++;
        } else if (input[i+2] == '/') {
            score += input[i+1] - '0';
            frame++;
        } else {
            frame++;
        }
    }
    
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateBowlingScore(input) << endl;
    return 0;
}