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
    string input_string;
    cout << "Enter a string: ";
    getline(cin, input_string);
    cout << "Anti-shuffled string: " << anti_shuffle(input_string) << endl;
    return 0;
}