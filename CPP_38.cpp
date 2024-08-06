string decode_cyclic(string str){
    string output;
    int i;
    for (i=0; i*3<str.length(); i++) {
        string x = str.substr(i*3, 3);
        if (x.length() == 3) 
            x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}