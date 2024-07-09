stack<char> s;
for (char bracket : brackets) {
    if (bracket == '(') {
        s.push(bracket);
    } else if (bracket == ')' && !s.empty() && s.top() == '(') {
        s.pop();
    } else {
        return false;
    }
}
return s.empty();