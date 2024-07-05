string decimal_to_binary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    if (binary.empty()) {
        binary = "0";  // Handle the case for decimal = 0
    }
    return "db" + binary + "db";
}