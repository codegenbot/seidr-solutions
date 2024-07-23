string binary = "db";
    if (decimal == 0) {
        binary += "0";
    } else {
        while (decimal > 0) {
            if (decimal % 2 == 0) {
                binary = "0" + binary;
            } else {
                binary = "1" + binary;
            }
            decimal /= 2;
        }
    }
    return binary + "db";
}