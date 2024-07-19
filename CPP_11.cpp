string string_xor(string a, string b) {
    string result = "";
    for(int i=0; i<min(a.length(), b.length()); i++){
        if(a[i] == b[i]){
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}