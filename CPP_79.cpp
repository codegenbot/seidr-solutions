#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string decimal_to_binary(int decimal) {
    string result = "db";
    if (decimal == 0) {
        result += "0";
    } else {
        while (decimal > 0) {
            result = (char)((decimal % 2) + '0') + result;
            decimal /= 2;
        }
    }
    result += "db";
    return result;
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    // Additional test cases can be added here
    return 0;
}