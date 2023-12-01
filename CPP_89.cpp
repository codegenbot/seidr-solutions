#include <iostream>
#include <string>

using namespace std;

string encrypt(string s){
    string encrypted = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 2 * 2) % 26 + 'a';
        }
        encrypted += c;
    }
    return encrypted;
}

int main() {
    // Test cases
    assert(encrypt("a") == "e");
    assert(encrypt("hello") == "jgnnq");
    assert(encrypt("xyz") == "bcd");

    cout << "All test cases passed!" << endl;
   
    return 0;
}