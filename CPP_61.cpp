bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') count++;
        else if (count > 0) count--;
        else {}
    }
    return count == 0;
}