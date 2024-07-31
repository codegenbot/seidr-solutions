string decimal_to_binary(int decimal) {
    if (decimal == 0) {
        return "db0db";
    }

    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal = decimal / 2;
    }

    return "db" + binary + "db";
}