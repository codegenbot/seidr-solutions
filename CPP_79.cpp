string decimal_to_binary(int decimal){
    string binary = "db";
    while(decimal > 0){
        binary = char((decimal % 2) + '0') + binary;
        decimal /= 2;
    }
    return binary + "db";
}