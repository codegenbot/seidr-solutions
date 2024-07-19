Here is the completed code:

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