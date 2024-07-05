#include <iostream>
#include <string>

using namespace std;

string decode_cyclic(string s){ 
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output = output + x;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a string to decode: ";
    cin >> input;
    cout << "Decoded string: " << decode_cyclic(input) << endl;
    return 0;
}