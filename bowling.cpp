int score(const string& bowls) {
    int total = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for(int i = 0; i < 10; i++) {
        if(bowls[bowlIndex] == 'X') {
            total += 10;
            total += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] == '/') ? 10 - (bowls[bowlIndex + 1] - '0') : bowls[bowlIndex + 1] - '0';
            total += (bowls[bowlIndex + 1] == 'X' && bowls[bowlIndex + 2] == 'X') ? 10 : 0;
            bowlIndex++;
        } else if(bowls[bowlIndex + 1] == '/') {
            total += 10;
            total += (bowls[bowlIndex + 2] == 'X') ? 10 : bowls[bowlIndex + 2] - '0';
            bowlIndex += 2;
        } else {
            total += (bowls[bowlIndex] - '0') + (bowls[bowlIndex + 1] - '0');
            bowlIndex += 2;
        }
    }
    
    return total;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score(bowls) << endl;
    return 0;
}