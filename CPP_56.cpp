bool correct_bracketing(string brackets) {
    stack<char> s;
    for (char c : brackets) {
        if (c == '(' || c == '<' || c == '[' || c == '{') {
            s.push(c);
        } else if ((c == ')' && s.top() == '(') ||
                   (c == '>' && s.top() == '<') ||
                   (c == ']' && s.top() == '[') ||
                   (c == '}' && s.top() == '{')) {
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    assert(not(correct_bracketing("<><><<><>><>>><>")));
    return 0;
}