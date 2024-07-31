int main() {
    string paren_string;
    cout << "Enter a string of nested parentheses: ";
    cin >> paren_string;

    vector<int> result = parse_nested_parens(paren_string);

    cout << "The nesting levels are: ";
    for (int level : result) {
        cout << level << " ";
    }
    cout << endl;

    return 0;
}