bool is_bracketing_correct(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '<') {
            count++;
        } else if (c == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    std::string brackets = "<><><<><>><>>><>";
    assert(!is_bracketing_correct(brackets));
    return 0;
}