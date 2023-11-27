#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string change_base(int x, int base){
    string result = "";
    while(x > 0){
        int rem = x % base;
        result = to_string(rem) + result;
        x = x / base;
    }
    return result;
}

int main(){
    int x, base;
    cout << "Enter the number: ";
    cin >> x;
    cout << "Enter the base: ";
    cin >> base;
    
    string result = change_base(x, base);
    cout << "Result: " << result << endl;

    assert(change_base(x, x + 1) == to_string(x));
    
    return 0;
}