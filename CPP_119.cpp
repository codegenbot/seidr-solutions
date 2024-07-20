bool hasOpenParens = false;
bool hasCloseParens = false;
for (const auto& str : lst) {
    for (char c : str) {
        if (c == '(') {
            hasOpenParens = true;
        } else if (c == ')') {
            hasCloseParens = true;
        }
    }
}

if ((hasOpenParens && !hasCloseParens) || (!hasOpenParens && hasCloseParens)) {
    return "No";
} else {
    return "Yes";
}