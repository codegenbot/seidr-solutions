string decimal_to_binary(int decimal){
    string binary = "db";
    while(decimal > 0){
        binary += to_string(decimal%2);
        decimal /= 2;
    }
    reverse(binary.begin()+2, binary.end());
    return binary + "db";
}