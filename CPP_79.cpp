string decimal_to_binary(int decimal){
    string binary = "db";
    if(decimal == 0)
        return "db0db";
    
    while(decimal > 0){
        int rem = decimal % 2;
        binary = to_string(rem) + binary;
        decimal /= 2;
    }
    
    return binary;
}