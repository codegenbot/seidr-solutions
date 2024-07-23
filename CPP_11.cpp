#include <string>
#include <iostream>

using namespace std;

string string_xor(string a, string b) {
    if (a.length() != b.length()) {
        cout << "Error: Strings are not the same length." << endl;
        return "";
    }
    
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        char c1 = a[i], c2 = b[i]; 
        if ((c1 == '1' && c2 == '0') || (c1 == '0' && c2 == '1')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    cout << string_xor("0101", "0000") << endl;
    return 0;
}