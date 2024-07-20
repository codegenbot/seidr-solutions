#include <string>

bool is_nested(std::string str); // declaration before main()

int main() {
    std::string s;
    cout << "Enter a string: ";
    cin >> s;
    if (is_nested(s)) {
        cout << "The string is nested." << endl;
    } else {
        cout << "The string is not nested." << endl;
    }
    return 0;
}

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 0) {
                count--;
            } else {
                return false;
            }
        }
    }
    return count > 0;