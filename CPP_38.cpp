#include <iostream>
#include <string>
#include <cassert>

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
    string str;
    cin >> str;
    cout << decode_cyclic(str) << endl;
    return 0;
}