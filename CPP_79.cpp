string result = "db";
    while (decimal > 0) {
        result = ((decimal % 2 == 0) ? '0' : '1') + result;
        decimal /= 2;
    }
    return result + "db";
}