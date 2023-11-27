#include <cassert>
#include <string>
#include <iostream>

using namespace std;

string decimal_to_binary(int decimal){
    string binary = "db";
    
    if(decimal == 0){
        binary += "0";
    }
    else{
        while(decimal > 0){
            binary = to_string(decimal % 2) + binary;
            decimal = decimal / 2;
        }
    }
    
    binary += "db";
    return binary;
}

int main() {
    cout << decimal_to_binary(15) << endl;
    
    return 0;
}