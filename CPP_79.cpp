Here is the completed code:

string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        binary.insert(0, (decimal % 2 == 0) ? "0" : "1");
        decimal /= 2;
    }
    return "db" + binary + "db";
}