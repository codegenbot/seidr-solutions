int correct_bracketing(string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count == 0) {
                return -1;
            }
            count--;
        }
    }
    return count == 0 ? 1 : 0;
}

int main() {
    string inputString = "(()())";
    cout << correct_bracketing(inputString);
}