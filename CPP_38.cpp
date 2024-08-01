#include <string>

string encode_cyclic(string s);

string decode_cyclic(string s){ 
    int l = s.length();
    string x, output, str;
    int i;
    for (i = 0; i * 3 < l; i++)
    {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) 
            x = x[2] + x.substr(0, 2);
        output = output + x;
    }
    return output;
}

string encode_cyclic(string s){
    // implement encoding logic here
}