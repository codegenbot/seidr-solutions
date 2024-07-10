Here is the completed code:

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}