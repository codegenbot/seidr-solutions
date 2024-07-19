string binary = "db";
    while (decimal > 0) {
        binary = ((decimal % 2) ? '1' : '0') + binary;
        decimal /= 2;
    }
    return binary + "db";
}