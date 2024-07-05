string decimal_to_binary(int decimal){
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    if (binary == "") binary = "0"; // handle the case when decimal is 0
    return "db" + binary + "db";
}