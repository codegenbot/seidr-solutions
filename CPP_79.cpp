string binary = "db";
    while(decimal > 0) {
        binary = char('0' + decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}