```cpp
bool is_nested(string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
    }
    return open > 0 && close > open;
}

bool main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    bool result = is_nested(str);
    if(result)
        cout << "The string is nested";
    else
        cout << "The string is not nested";
    return 0;
}