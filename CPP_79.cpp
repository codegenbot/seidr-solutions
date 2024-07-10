#include <string>
using namespace std;

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        if (decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}

int main() {
    assert (decimal_to_binary(15) == "db1111db");
    return 0;
}