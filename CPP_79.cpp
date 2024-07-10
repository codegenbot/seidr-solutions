```cpp
#include<iostream>
using namespace std;

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main(){
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary representation of the given decimal is: " << decimal_to_binary(num) << endl;
    return 0;
}