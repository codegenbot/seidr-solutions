#include <iostream>
using namespace std;

string fix_spaces(string s) {
    return s.replace(0, s.find_first_of(" ") ? 0 : s.find_first_of(" "), "-");
}

int main() {
    cout << fix_spaces("   Exa 1 2 2 mple") << endl;
    return 0;
}