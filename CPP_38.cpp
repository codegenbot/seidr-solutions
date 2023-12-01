string encode_cyclic(string s){
    int l = s.length();
    string output;
    int i;
    for (i = 0; i < l; i++) {
        output += s.substr(i, 1) + s.substr((l-1-i)%l, 1);
    }
    return output;
}

string decode_cyclic(string s){
    int l = s.length();
    string output;
    int i;
    for (i = 0; i < l/2; i++) {
        output += s.substr(2*i+1, 1);
    }
    if (l%2 == 1) {
        output += s.substr(l/2, 1);
    }
    return output;
}