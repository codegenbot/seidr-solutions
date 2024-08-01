int score = 0;
std::string bowls;
std::cin >> bowls;

for (int i = 0; i < bowls.size(); ++i) {
    if (bowls[i] == 'X') {
        score += 10;
        if (i < bowls.size() - 2) {
            if (bowls[i+2] == '/') {
                score += 10;
            } else {
                if (bowls[i+1] != 'X') score += bowls[i+1] - '0';
                if (bowls[i+2] != 'X') score += bowls[i+2] - '0';
            }
        }
    } else if (bowls[i] == '/') {
        score += 10 - (bowls[i-1] - '0');
        if (i < bowls.size() - 1) score += bowls[i+1] - '0';
    } else {
        score += bowls[i] - '0';
    }
}

std::cout << score;