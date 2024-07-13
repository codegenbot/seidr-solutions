int main() {
    string input;
    cin >> input;
    
    int score = 0;
    int frame = 0;
    int bowls[22];
    
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'X') {
            bowls[i] = 10;
            bowls[i+1] = 0;
        } else if (input[i] == '/') {
            bowls[i] = 10 - (input[i-1] - '0');
        } else if (input[i] == '-') {
            bowls[i] = 0;
        } else {
            bowls[i] = input[i] - '0';
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        if (bowls[frame] == 10) {
            score += 10 + bowls[frame+1] + bowls[frame+2];
            ++frame;
        } else if (bowls[frame] + bowls[frame+1] == 10) {
            score += 10 + bowls[frame+2];
            frame += 2;
        } else {
            score += bowls[frame] + bowls[frame+1];
            frame += 2;
        }
    }
    
    cout << score << endl;
    
    return 0;
}