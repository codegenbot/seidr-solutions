#include <string>
using namespace std;

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
    cout << "Enter a string: ";
    cin >> s;
    bool result = is_nested(s);
    if(result)
        cout << "The input string is nested.\n";
    else
        cout << "The input string is not nested.\n";
    return 0;
}