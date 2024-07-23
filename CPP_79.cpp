string decimal_to_binary(int decimal){
    string binary;
    if(decimal == 0) {
        binary = "0";
    } else {
        while(decimal > 0) {
            binary = to_string(decimal % 2) + binary;
            decimal /= 2;
        }
    }
    return "db" + binary + "db";
}