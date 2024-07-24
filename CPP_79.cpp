#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string decimal_to_binary(int decimal){
    string binary = "db";
    while(decimal > 0){
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary + "db";
}

int main(){
    assert(decimal_to_binary(15) == "db1111db");
    // Add more test cases here
    assert(decimal_to_binary(8) == "db1000db");
    assert(decimal_to_binary(5) == "db101db");

    cout << "All test cases passed!" << endl;
    return 0;
}