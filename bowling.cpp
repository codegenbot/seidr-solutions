int main() {
    string input;
    cin >> input;
    
    int score = 0;
    int frame = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (input[i+1] == 'X') ? 10 : (input[i+1] == '/') ? 10 - input[i-1] + 10 : input[i+1] - '0';
                score += (input[i+2] == 'X') ? 10 : (input[i+2] == '/') ? 10 - input[i+1] : input[i+2] - '0';
                frame++;
            }
        } else if (input[i] == '/') {
            score += 10 - input[i-1] + ((i < input.size() - 1) ? input[i+1] - '0' : 0);
        } else {
            score += input[i] - '0';
        }
    }
    
    cout << score << endl;
    return 0;
}