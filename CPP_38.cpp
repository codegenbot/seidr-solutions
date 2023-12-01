string encode_cyclic(string s){
    int l = s.length();
    int num = (l + 2) / 3;
    string output;
    for (int i = 0; i < num; i++)
    {
        string x = s.substr(i * 3, 3);
        if (x.length() < 3)
        {
            x += string(3 - x.length(), 'x');
        }
        output += x[2] + x.substr(0, 2);
    }
    return output;
}

string decode_cyclic(string s){
    int l = s.length();
    int num = (l + 2) / 3;
    string output;
    for (int i = 0; i < num; i++)
    {
        string x = s.substr(i * 3, 3);
        if (x.length() < 3)
        {
            x = string(3 - x.length(), 'x') + x;
        }
        output += x[1] + x[2] + x[0];
    }
    return output;
}