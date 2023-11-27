string decimal_to_binary(int decimal){
    string binary = "db";  // initialize the binary string with "db" at the beginning
    
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;  // append the remainder to the beginning of the string
        decimal /= 2;  // divide the decimal number by 2
    }
    
    binary += "db";  // append "db" at the end of the string
    return binary;
}