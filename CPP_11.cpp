#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string string_xor(const string& a, const string& b) {
    string result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result += '0';
        } else {
            result += '1';
        }
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    // Add more test cases here...
    
    // Test case 1
    assert(string_xor("110", "001") == "111");
    
    // Test case 2
    assert(string_xor("101010", "111111") == "010101");
  
    return 0;
}