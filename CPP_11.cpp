string string_xor(string a, string b){
    string result;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[i]) {
            result.push_back('0');
        } else {
            result.push_back('1');
        }
    }
    return result;
}