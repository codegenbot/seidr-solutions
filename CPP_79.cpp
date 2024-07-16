string decimal_to_binary(int decimal){
    string binary = "db";
    if(decimal == 0){
        binary += "0";
    } else {
        while(decimal > 0){
            binary = char((decimal % 2) + '0') + binary;
            decimal /= 2;
        }
    }
    binary += "db";
    return binary;
}