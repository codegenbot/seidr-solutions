string string_xor(const string& a, const string& b) {
    string result = "";
    for(size_t i=0; i < a.length(); i++){
        if(a[i] != b[i]){
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}