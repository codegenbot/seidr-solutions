string decode_cyclic(string s){ 
    int l = s.length();
    string output;
    for (int i = 0; i < l; i += 3) {
        string x = s.substr(i, 3);
        if (x.length() == 3) {
            x = x[2] + x.substr(0, 2);
        }
        output += x;
    }
    return output;
}