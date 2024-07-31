```cpp
#include <string>
#include <cassert>
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
    string result = decimal_to_binary(15);
    assert (result == "db1111db");
    return 0;
}