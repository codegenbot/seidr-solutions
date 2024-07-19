string decimal_to_binary(int decimal){
    string res = "db";
    if(decimal == 0){
        res += "0";
    }
    while(decimal > 0){
        res = ((decimal % 2) ? '1' : '0') + res;
        decimal /= 2;
    }
    return res + "db";
}