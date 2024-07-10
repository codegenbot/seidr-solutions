bool prime_length(const std::string& str) {
    int len = std::stoi(str); 
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;
}