int score = 0;
std::string input;
std::cin >> input;

for (int i = 0; i < input.size(); ++i) {
    if (input[i] == 'X') {
        score += 10;
        if (i < input.size() - 3) {
            if (input[i + 2] == 'X')
                score += 10 + ((input[i + 4] == 'X') ? 10 : (input[i + 4] - '0'));
            else
                score += ((input[i + 2] == '/') ? 10 : (input[i + 2] - '0') + (input[i + 4] == '/' ? 10 : (input[i + 4] - '0')));
        }
    } else if (input[i] == '/') {
        score += 10 - (input[i - 1] - '0');
        score += (i < input.size() - 1) ? (input[i + 1] == 'X' ? 10 : (input[i + 1] - '0')) : 0;
    } else {
        score += (input[i] == '-' ? 0 : (input[i] - '0'));
    }
}
std::cout << score;