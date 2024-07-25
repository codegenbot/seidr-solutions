string decimal_to_binary(int decimal){
    string result = "db";
    if(decimal == 0){
        result += "0";
    }
    while(decimal > 0){
        result = (decimal % 2 == 0 ? "0" : "1") + result;
        decimal /= 2;
    }
    return result + "db";
}