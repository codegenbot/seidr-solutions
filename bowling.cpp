int score(string input) {
    int total = 0;
    int frame = 0;
    
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'X') {
            total += 10;
            total += (input[i+1] == 'X') ? 10 : (input[i+1] == '/' ? 10 - (input[i+2] - '0') : input[i+1] - '0');
            total += (input[i+2] == 'X') ? 10 : (input[i+2] == '/' ? 10 - (input[i+3] - '0') : input[i+2] - '0');
            frame++;
        } else if (input[i] == '/') {
            total += 10 - (input[i-1] - '0');
            total += (input[i+1] == 'X') ? 10 : input[i+1] - '0';
            frame++;
        } else if (input[i] >= '0' && input[i] <= '9') {
            total += input[i] - '0';
            if (frame < 10 && input[i+1] == '/') {
                total += 10 - (input[i] - '0');
            }
            frame++;
        }
        if (frame == 10) break;
    }
    
    return total;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}