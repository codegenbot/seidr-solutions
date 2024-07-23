#include <sstream>
#include <iostream>

using namespace std;

string string_xor(string a, string b) {
    istringstream is_a(a), is_b(b);
    string result = "";
    char c1, c2;
    is_a >> c1;
    is_b >> c2;
    
    while (!is_a.eof() || !is_b.eof()) {
        if ((c1 - '0') ^ (c2 - '0')) {
            result += "1";
        } else {
            result += "0";
        }
        
        is_a >> c1;
        is_b >> c2;
    }
    
    return result;
}

int main() {
    string a = "0101";
    string b = "0000";
    cout << string_xor(a, b) << endl;
    return 0;
}