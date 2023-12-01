string decimal_to_binary(int decimal){
    string binary = "db";
    int num = decimal;

    while(num > 0){
        int remainder = num % 2;
        binary = to_string(remainder) + binary;
        num = num / 2;
    }

    return binary + "db";
}