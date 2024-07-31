string binary = "db";
    while (decimal) {
        if (decimal % 2 == 0) {
            binary = "0" + binary;
        } else {
            binary = "1" + binary;
        }
        decimal /= 2;
    }
    return binary + "db";
}