int main() {
    string str;
    cin >> str;

    bool isNested = false;
    int countOpen = 0, countClose = 0;

    for (char c : str) {
        if (c == '[') {
            countOpen++;
        } else if (c == ']') {
            countClose++;

            if (countOpen > 0 && countClose >= countOpen) {
                isNested = true;
                break;
            }
        }
    }

    cout << (isNested ? "true" : "false") << endl;

    return 0;
}