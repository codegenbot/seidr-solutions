string decimal_to_binary(int decimal){
    string binary = "db";
    if(decimal == 0){
        binary.push_back('0');
    }
    while(decimal > 0){
        binary.insert(binary.begin() + 2, (decimal % 2) + '0');
        decimal /= 2;
    }
    return binary + "db";
}