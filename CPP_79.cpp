string decimal_to_binary(int decimal){
    string binary = "db";
    int quotient = decimal;
    while(quotient > 0){
        int remainder = quotient % 2;
        binary = to_string(remainder) + binary;
        quotient = quotient / 2;
    }
    return binary + "db";
}