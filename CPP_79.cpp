```cpp
string decimal_to_binary(int decimal);
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "The binary representation is: " << decimal_to_binary(decimal) << endl;
    return 0;
}

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