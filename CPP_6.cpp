int main() {
    vector<int> expected = {4, 3, 2, 1, 0, -1, -2, -3, -4};
    if (!same(parse_nested_parens("(()(())((()))"), expected)) {
        cout << "Failed" << endl;
    } else {
        cout << "Passed" << endl;
    }
    return 0;