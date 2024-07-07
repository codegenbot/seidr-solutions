```cpp
#include <iostream>
#include <string>

using namespace std;

bool is_nested(string str) {
    int count = 0;
    bool isOpeningBracket = false;
    for (char c : str) {
        if (c == '[') {
            if (!isOpeningBracket) {
                count++;
                isOpeningBracket = true;
            }
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
            isOpeningBracket = false;
        }
    }
    return count > 0;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (is_nested(str)) {
        cout << "The string is nested." << endl;
    } else {
        cout << "The string is not nested." << endl;
    }
}