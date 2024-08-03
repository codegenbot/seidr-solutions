```cpp
string decimal_to_binary(int decimal);
string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0){
        if((decimal & 1) == 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        decimal >>= 1;
    }
    return binary;
}