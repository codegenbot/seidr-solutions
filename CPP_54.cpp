```cpp
#include <string>
#include <algorithm>

using namespace std;

bool same_chars(string s0, string s1) {
    return s0.size() == s1.size() && s0.compare(s1) == 0;
}

int main() {
    string s0, s1;
    cout << "Enter the first string: ";
    cin >> s0;
    cout << "Enter the second string: ";
    cin >> s1;
    if (same_chars(s0, s1)) {
        cout << "The strings have the same characters.\n";
    } else {
        cout << "The strings do not have the same characters.\n";
    }
    return 0;
}