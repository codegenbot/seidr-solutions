```cpp
#include <string>
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
    string result = "db";
    result += binary;
    result += "db";
    return result;
}

int main(){
    assert (decimal_to_binary(15) == "db1111db");
    return 0; 
}