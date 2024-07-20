Here is the completed code:

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        int remainder = decimal % 2;
        if(remainder == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}