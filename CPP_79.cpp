string decimal_to_binary(int decimal){
    ostringstream oss;
    oss << "db";
    for(int i = 31; i >= 0; --i){
        if((decimal >> i) & 1)
            oss << '1';
        else
            oss << '0';
    }
    oss << "db";
    return oss.str();
}