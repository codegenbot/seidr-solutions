#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {
    string change_base(int x, int base){
        string result = "";
        while(x > 0){
            result = to_string(x % base) + result;
            x /= base;
        }
        return result;
    }

    // Test the function
    int num = 42;
    int base = 2;
    string result = change_base(num, base);
    cout << result << endl;

    return 0;
}  