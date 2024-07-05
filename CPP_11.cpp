string string_xor(string a, string b){
    string result = "";
    for(size_t i = 0; i < a.length(); ++i) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}