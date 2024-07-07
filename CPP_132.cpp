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
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (is_nested(input)) {
        cout << "The string is nested." << endl;
    } else {
        cout << "The string is not nested." << endl;
    }
    return 0;
}