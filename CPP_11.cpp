```cpp
#include <iostream>
#include <algorithm>

using namespace std;

string string_xor(string a, string b) {
    string result = "";
    for(int i=0; i<a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    string a = "0101";
    string b = "0000";
    cout << string_xor(a, b) << endl;
    return 0;
}