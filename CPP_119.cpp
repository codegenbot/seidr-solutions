```cpp
int match_parens(vector<string> lst) {
    int countOpen = 0;
    int countClose = 0;

    for (string s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else if (c == ')') countClose++;
        }
    }

    return (countOpen == countClose) ? "Yes" : "No";
}

int main() {
    assert(match_parens({"()"})); // replace with your test cases
    return 0;
}