string decimal_to_binary(int decimal){
    string binary = "db";
    if(decimal == 0){
        binary += '0';
    } else {
        while(decimal > 0){
            binary = char('0' + decimal % 2) + binary;
            decimal /= 2;
        }
    }
    return binary + "db";
}