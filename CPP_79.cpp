string decimal_to_binary(int decimal){
    string binary = "";
    while(decimal > 0){
        int remainder = decimal % 2;
        if(remainder == 1)binary.push_back('1');
        else binary.push_back('0');
        decimal /= 2;
    }
    string result = "db";
    result += binary;
    result += "db";
    return result;
}