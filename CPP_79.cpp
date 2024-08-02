#include <string>
using namespace std;

std::string decimal_to_binary(int decimal){
    std::string binary = "";
    while(decimal > 0){
        binary = (decimal & 1) ? "1" + binary : "0" + binary;
        decimal >>= 1;
    }
    return "db" + binary + "db";
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "The binary representation is: " << decimal_to_binary(decimal) << endl;
    return 0;
}