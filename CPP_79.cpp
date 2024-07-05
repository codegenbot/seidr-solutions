string decimal_to_binary(int decimal) {
    string binary = "db";
    if (decimal == 0) {
        binary += "0";
    }
    while (decimal > 0) {
        binary.insert(2, 1, (decimal % 2) + '0');
        decimal /= 2;
    }
    binary += "db";
    return binary;
}