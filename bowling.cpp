int calculateFrameScore(int bowlScore, int index, const std::string& bowls) {
    if (bowls.length() == 0) {
        return 0;
    }
    
    if (bowls.at(index) == 'X') {
        return 10 + ((index + 1 < bowls.length() && bowls.at(index + 1) == 'X') ? 10 : (bowls.at(index + 1) - '0' - '0')) + ((index + 2 < bowls.length() && bowls.at(index + 2) == 'X') ? 10 : (bowls.at(index + 2) - '0' - '0'));
    } else if (index % 2 == 1 && bowls.at(index) == '/') {
        return 10 - (bowls.at(index - 1) - '0' - '0') + ((index + 1 < bowls.length() && bowls.at(index + 1) == 'X') ? 10 : (bowls.at(index + 1) - '0' - '0'));
    } else {
        return bowlScore;
    }
}