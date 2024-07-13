Here is the completed code:

```cpp
string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        int remainder = decimal % 2;
        if(remainder == 1)
            binary.insert(0,"1");
        else
            binary.insert(0,"0");
        decimal /= 2;
    }
    return "db" + binary + "db";
}