#include <iostream>
#include <string>
using namespace std;

string decode_cyclic(string s){ 
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) 
            x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

int main() {
    string str;
    cout << "Enter the encoded string: ";
    cin >> str;
    string decoded_str = decode_cyclic(str);
    cout << "Decoded String: " << decoded_str << endl;
    return 0;
}