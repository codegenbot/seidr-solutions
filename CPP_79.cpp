string decimal_to_binary(int decimal){
    return "db" + bitset<32>(decimal).to_string() + "db";
}