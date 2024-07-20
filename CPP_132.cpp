#include <string>

bool is_nested(std::string str); 

int main() {
    std::string str;
    cin >> str;
    if (is_nested(str)) {
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