std::string decimal_to_binary(int decimal){
    std::string binary = "db"; // Initialize here
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    return binary + "db";
}