string decimal_to_binary(int decimal){
    string binary = "";
    while (decimal > 0) {
        int remainder = decimal % 2;
        if (remainder == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        decimal /= 2;
    }
    return "db" + binary + "db";
}