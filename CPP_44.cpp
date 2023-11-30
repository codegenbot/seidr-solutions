#include <iostream>
#include <string>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    
    while (x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x /= base;
    }
    
    return result;
}

int main() {
    cout << change_base(8, 3) << endl;
    cout << change_base(8, 2) << endl;
    cout << change_base(7, 2) << endl;
    
    return 0;
}