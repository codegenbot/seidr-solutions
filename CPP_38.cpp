#include <iostream>
#include <string>

using namespace std;

string decode_cyclic(string s) {
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

int main() {
    string s;
    cout << "Enter encoded string: ";
    cin >> s;
    cout << "Decoded string: " << decode_cyclic(s) << endl;
    return 0;
}