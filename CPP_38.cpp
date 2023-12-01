string decode_cyclic(string s){ 
    string output;
    int l = s.length();
    int num = (l + 2) / 3;
    for (int i = 0; i < num; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}