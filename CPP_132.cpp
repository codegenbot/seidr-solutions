#include <string>

bool is_nested(std::string str); // declaration before main()

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (is_nested(str)) 
        cout << "The input string is nested." << endl;
    else
        cout << "The input string is not nested." << endl;
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