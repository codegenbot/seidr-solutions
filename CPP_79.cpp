string decimal_to_binary(int decimal){
    string binary = "db";
    if(decimal == 0){
        binary += "0";
    }
    else{
        while(decimal > 0){
            int remainder = decimal % 2;
            binary += to_string(remainder);
            decimal /= 2;
        }
    }
    reverse(binary.begin(), binary.end());
    binary += "db";
    return binary;
}