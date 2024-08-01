#include <iostream>
#include <string>

std::string encode_cyclic(std::string s){
    // implement encoding logic here
}

std::string decode_cyclic(std::string s){ 
    std::string output, x;
    int l = s.length();
    int i;
    for (i = 0; i * 3 < l; i++)
    {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output = output + x;
    }
    return output;
}