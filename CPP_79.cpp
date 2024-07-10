string binary = "db";
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = to_string(remainder) + binary;
        decimal /= 2;
    }
    return binary + "db";
}