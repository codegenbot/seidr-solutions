#include <string>

bool cycpattern_check(string a, string b) {
    string temp = b + b;
    return (temp.find(a) != string::npos);
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << cycpattern_check(a, b);
    return 0;
}