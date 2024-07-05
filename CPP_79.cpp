#include <string>
using namespace std;

string decimal_to_binary(int decimal) {
    if (decimal == 0) return "db0db";  // Handle the edge case for 0
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}