#include <iostream>
#include <vector>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
    vector<string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";
    
    for(int i=0; i<values.size(); i++){
        while (number >= values[i]) {
            result += roman[i];
            number -= values[i];
        }
    }
    
    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    assert(int_to_mini_roman(900) == "CM");
    assert(int_to_mini_roman(500) == "D");
    assert(int_to_mini_roman(400) == "CD");
    assert(int_to_mini_roman(100) == "C");
    assert(int_to_mini_roman(90) == "XC");
    assert(int_to_mini_roman(50) == "L");
    assert(int_to_mini_roman(40) == "XL");
    assert(int_to_mini_roman(10) == "X");
    assert(int_to_mini_roman(9) == "IX");
    assert(int_to_mini_roman(5) == "V");
    assert(int_to_mini_roman(4) == "IV");
    assert(int_to_mini_roman(1) == "I");
    
    return 0;
}