```cpp
#include <iostream>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 1) {
            res += s[i];
        }
    }
    return res;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string output = anti_shuffle(input);
    cout << "Anti-shuffled string: " << output << endl;
    return 0;
}