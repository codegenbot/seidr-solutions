std::string string_xor(std::string a, std::string b) {
    std::string result = "";
    for(int i=0; i<a.length(); i++) {
        if((a[i] - '0') ^ (b[i] - '0')) 
            result += (a[i] + 0);
        else
            result += a[i];
    }
    return result;
}