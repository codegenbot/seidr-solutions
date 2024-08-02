#include<iostream>
using namespace std;

string string_xor(string a, string b) {
    string result = "";
    for(int i=0; i<a.length(); i++) {
        if(a[i] == '1' && b[i] == '1' || a[i] == '0' && b[i] == '0') 
            result += '0';
        else
            result += '1';
    }
    return result;
}

int main() {
    string a, b;
    cout << "Enter the first binary string: ";
    cin >> a;
    cout << "Enter the second binary string: ";
    cin >> b;
    
    if(a.length() != b.length()) {
        cout << "Error: The two strings must be of equal length." << endl;
    } else {
        string xor_result = string_xor(a, b);
        cout << "The XOR operation result is: " << xor_result << endl;
    }
    return 0;
}