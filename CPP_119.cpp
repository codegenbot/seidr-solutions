int match_parens(const vector<string>& lst) {
    int countOpen = 0;
    for (const auto& s : lst) {
        int countClose = 0;
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else if (c == ')') {
                if (countOpen > 0) {
                    countOpen--;
                } else {
                    countClose++;
                }
            }
        }
    }
    return countOpen == 0 ? "Yes" : "No";
}

int main() {
    vector<string> lst = {"(())"};
    cout << match_parens(lst);
    assert(match_parens({""}) == "Yes");
    return 0;
}