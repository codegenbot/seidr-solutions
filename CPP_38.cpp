#include <string>

string encode_cyclic(string s){
    string output;
    for (char chr : s) {
        output += (chr + 3) % 128;
    }
    return output;
}

string decode_cyclic(string s){ 
    string output;
    for (char chr : s) {
        output += (chr - 3 + 128) % 128; 
    }
    return output;
}