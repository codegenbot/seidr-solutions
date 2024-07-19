string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0) {
        int remainder = decimal % 2;
        if(remainder == 0) {
            binary.insert(binary.begin(), '0');
        } else {
            binary.insert(binary.begin(), '1');
        }
        decimal /= 2;
    }
    string result = "db" + binary + "db";
    return result;
}