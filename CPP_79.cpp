string decimal_to_binary(int decimal){
    string binary = "db";
    while (decimal > 0) {
        binary.insert(2, 1, (decimal % 2 == 0 ? '0' : '1'));
        decimal /= 2;
    }
    binary.append("db");
    return binary;
}