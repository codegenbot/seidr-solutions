#include <iostream>
#include <cassert>
#include <string>
using namespace std;

string decimal_to_binary(int decimal) {
    string binary = "";
    if (decimal == 0) return "db0db"; // Handle the special case when decimal is 0

    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db");
    assert(decimal_to_binary(0) == "db0db");
    assert(decimal_to_binary(8) == "db1000db");
    cout << "All test cases passed!" << endl;
    return 0;
}