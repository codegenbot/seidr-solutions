#include <string>
#include <cassert>

std::string encode_cyclic(std::string s);

std::string decode_cyclic(std::string s){
    int l=s.length();
    std::string x, output;
    int i;
    for (i=0;i*3<l;i++) {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x[2]+x.substr(0,2);
        output=output+x;
    }
    return output;
}