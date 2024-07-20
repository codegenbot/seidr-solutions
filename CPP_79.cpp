string decimal_to_binary(int decimal){
    ostringstream oss;
    oss << "db";
    for(int i = 31; i >= 0; --i){
        oss << ((decimal >> i) & 1);
    }
    oss << "db";
    return oss.str();
}