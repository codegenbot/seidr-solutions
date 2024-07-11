string result = "db";
    if (decimal == 0) {
        result += "0";
    } else {
        while (decimal > 0) {
            result = (decimal % 2 == 0 ? "0" : "1") + result;
            decimal /= 2;
        }
    }
    result += "db";
    return result;
}