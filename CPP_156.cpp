```
#include <map>
using namespace std;

string roman(int number) {
    map<int, string> roman;
    roman[1000] = "M";
    roman[900] = "CM";
    roman[500] = "D";
    roman[400] = "CD";
    roman[100] = "C";
    roman[90] = "XC";
    roman[50] = "L";
    roman[40] = "XL";
    roman[10] = "X";
    roman[9] = "IX";
    roman[5] = "V";
    roman[4] = "IV";
    roman[1] = "I";

    string result = "";
    for (auto pair : roman) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
    return result;
}

int main() {
    assert(roman(1000) == "M");
    return 0;
}