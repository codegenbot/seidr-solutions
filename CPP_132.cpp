```cpp
bool is_nested(string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
    }
    return open > 0 && close > open;
}

int main() {
    string s;
    cin >> s;
    if (is_nested(s)) {
        cout << "The string is nested.\n";
    } else {
        cout << "The string is not nested.\n";
    }
    return 0;
}