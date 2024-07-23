int calculateFrameScore(int bowlScore, size_t index, const std::string& bowls) {
    if (bowls[index] == 'X') {
        return 10 + ((bowls[index + 1] == 'X') ? 10 : (bowls[index + 1] - '0')) + ((bowls[index + 2] == 'X') ? 10 : (bowls[index + 2] - '0'));
    } else if (index % 2 == 1 && bowls[index] == '/') {
        return 10 - (bowls[index-1] - '0') + ((bowls[index+1] == 'X') ? 10 : (bowls[index+1] - '0'));
    } else {
        return bowlScore;
    }
}