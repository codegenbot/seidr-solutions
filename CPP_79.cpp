string decimal_to_binary(int n) {
    string binary = "";
    while(n > 0){
        if((n & 1) == 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        n >>= 1;
    }
    return "db" + binary + "db";
}