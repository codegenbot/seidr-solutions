```cpp
#include <iostream>
#include <string>

string anti_shuffle(string& s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        res += static_cast<char>(s[i]); 
    }
    return res;
}

int main() {
    string input_string;
    cout << "Enter a string: ";
    cin >> input_string;
    cout << "Anti-shuffled string: " << anti_shuffle(input_string) << endl;
    return 0;
}