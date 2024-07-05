#include <iostream>
#include <string>
using namespace std;

string decode_cyclic(string s) { 
    int l = s.length();
    int num = (l + 2) / 3;
    string output;
    for (int i = 0; i * 3 < l; i++) {
        // reverse cycle elements in each group. Unless group has fewer elements than 3.
        string x = s.substr(i * 3, 3);
        if (x.length() == 3)
            x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter the encoded string: ";
    cin >> input;
    
    string decoded = decode_cyclic(input);
    cout << "Decoded string: " << decoded << endl;

    return 0;
}