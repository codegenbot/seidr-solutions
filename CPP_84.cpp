int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    
    string binary = "";
    while (sum > 0) {
        if (sum % 2 == 0) {
            binary = "0" + binary;
        } else {
            binary = "1" + binary;
        }
        sum /= 2;
    }
    
    return binary;
}