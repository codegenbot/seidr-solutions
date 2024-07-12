int score(vector<char>& bowls) {
    int frame = 1, score = 0, bowlIndex = 0;
    for (int i = 0; i < 10; ++i) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2]) ? bowls[bowlIndex + 2] - '0' : 10);
            score += (bowls[bowlIndex + 4] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 4]) ? bowls[bowlIndex + 4] - '0' : 10);
            bowlIndex++;
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2]) ? bowls[bowlIndex + 2] - '0' : 10);
            bowlIndex += 2;
        } else {
            score += (isdigit(bowls[bowlIndex]) ? bowls[bowlIndex] - '0' : 0) + (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 0);
            bowlIndex += 2;
        }
    }
    return score;
}

int main() {
    string input;
    vector<char> bowls;
    getline(cin, input);
    for(char c : input) {
        if(c != ' ') {
            bowls.push_back(c);
        }
    }

    int result = score(bowls);
    cout << result << endl;

    return 0;
}