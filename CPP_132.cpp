int main() {
    // test cases
    cout << (is_nested("[[]]") ? "true" : "false") << endl;
    cout << (is_nested("[]]]]]]][[[[[]") ? "true" : "false") << endl;
    cout << (is_nested("[][]") ? "true" : "false") << endl;
    cout << (is_nested("[]") ? "true" : "false") << endl;
    cout << (is_nested("[[][]]") ? "true" : "false") << endl;
    cout << (is_nested("[[]][[") ? "true" : "false") << endl;

    return 0;
}

bool is_nested(string str) {
    int open = 0, close = 0;
    for(char c : str) {
        if(c == '[') open++;
        else if(c == ']') close++;
        if(open > 0 && close > 0) return true;
    }
    return false;
}