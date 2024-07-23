string binary = "db";
    while (decimal > 0){
        char bit = (decimal % 2) + '0';
        binary = bit + binary;
        decimal /= 2;
    }
    return binary + "db";
}