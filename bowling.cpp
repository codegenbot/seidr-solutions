```cpp
int bowlingScore(std::string input) {
    int score = 0;
    int i = 0;
    while(i < input.length()) {
        if(input[i] == 'X') {
            score += 30;
            i++;
        } else if(input[i] == '/') {
            char nextChar = input[i+1];
            if(nextChar == '/') {
                score += 10;
            } else {
                score += 10 + (nextChar - '0');
            }
            i += 2;
        } else {
            char first = input[i];
            char second = (i+1 < input.length()) ? input[i+1] : '0';
            roll = std::to_string((first == 'X') ? 10 : (second == '/') ? 10 - (first-'0') : (first-'0')) + ((second == '/')?"":"+"+(second-'0'));
            if(roll == "10") {
                score += 10;
            } else if(roll.find('+') != std::string::npos) {
                int value = stoi((std::string)roll.erase(roll.find('+'), roll.length()));
                score += (first - '0') + value;
            } else {
                score += stoi(roll);
            }
            i += 2;
        }
    }
    return score;
}