bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            count++;
        } else if (bracket == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    assert(correct_bracketing("<<>>") == true);
    assert(correct_bracketing("<><>") == true);
    assert(correct_bracketing("<>") == true);
    assert(correct_bracketing("<>>>") == false);
    assert(correct_bracketing(">") == false);

    return 0;
}