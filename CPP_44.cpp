#include <iostream>
#include <string>  
using namespace std;  

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x;
    cin >> x;  
    string result = change_base(x, x + 1);
    cout << result << endl;  
    return 0;
}