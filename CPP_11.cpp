```cpp
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
    string str1, str2;
    cout << "Enter the first binary string: ";
    cin >> str1;
    cout << "Enter the second binary string: ";
    cin >> str2;
    
    if(str1.length() != str2.length()) {
        cout << "Strings must be of equal length." << endl;
        return 0;
    }
    
    string_xor(str1, str2);
    for(int i=0; i<str1.length(); i++) 
        cout << (str1[i] ^ str2[i]);
    
    return 0;
}