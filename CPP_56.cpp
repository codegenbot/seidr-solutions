// Add function signature at the beginning
bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    // Change for (char c : brackets) to traditional for loop
    for (int i = 0; i < brackets.size(); ++i) {
        char c = brackets[i];
        if (c == '<') {
            count++;
        } else if (c == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    // Change return count == 0; to true outside the loop
    return count == 0;
}