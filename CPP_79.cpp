Here is the completed code:

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0) binary += '0';
        else binary += '1';
        decimal /= 2;
    }
    return "db" + binary + "db";
}