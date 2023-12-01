#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string decimal_to_binary(int decimal){
    string binary = "db";
    while(decimal > 0){
        int rem = decimal % 2;
        binary = to_string(rem) + binary;
        decimal = decimal / 2;
    }
    return binary + "db";
}

int main(){
    assert(decimal_to_binary(15) == "db1111db");

    return 0;
}