#include <iostream>
#include <string>
using namespace std;

string decode_shift(const string& s){
    string out;
    for (char ch : s) {
        int w = ((int)ch - 5 - (int)'a' + 26) % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

int main() {
    string s;
    cout << "Enter encoded string: ";
    cin >> s;

    string decoded_str = decode_shift(s);
    cout << "Decoded string: " << decoded_str << endl;

    return 0;
}