#include<iostream>
#include<string>
using namespace std;

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0){
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    cout << decimal_to_binary(number) << endl;
    return 0;
}