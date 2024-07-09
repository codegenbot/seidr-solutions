string result = "db";
    
    if (decimal == 0) {
        result += '0';
    }
    
    while (decimal > 0) {
        char bit = (decimal % 2) + '0';
        result = bit + result;
        decimal /= 2;
    }
    
    return result + "db";
}