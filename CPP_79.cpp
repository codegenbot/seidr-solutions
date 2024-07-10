Here is the completed code:

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        if (decimal % 2 == 0)
            binary.push_back('0');
        else
            binary.push_back('1');
        decimal /= 2;
    }
    return "db" + binary + "db";
}