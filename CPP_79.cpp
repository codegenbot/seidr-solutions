```cpp
string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        if((decimal & 1) == 1)
            binary.insert(0,"1");
        else
            binary.insert(0,"0");
        decimal >>= 1;
    }
    return "db" + binary + "db";
}

int main() {
    assert (decimal_to_binary(15) == "db1111db");
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary representation: " << decimal_to_binary(decimal);
    return 0;
}