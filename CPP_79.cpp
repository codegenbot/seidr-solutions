string decimal_to_binary(int decimal){
    string binary = "db";
    
    if(decimal == 0){
        binary += "0";
        return binary + "db";
    }
    
    while(decimal > 0){
        int remainder = decimal % 2;
        binary = to_string(remainder) + binary;
        decimal /= 2;
    }
    
    return binary + "db";
}