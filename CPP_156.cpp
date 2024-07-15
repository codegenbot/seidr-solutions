#include <iostream>
#include <cassert>

int main() {
    int number;
    cin >> number;
    string result = int_to_mini_roman(number);
    cout << result << endl;
    
    assert(int_to_mini_roman(number) == result);
    
    return 0;
}