#include <string>
#include <cassert>

std::string encode_cyclic(std::string s){
    int l = s.length();
    std::string x, output;
    int i;
    for (i = 0; i < l; i += 3) {
        x = s.substr(i, std::min(3, l - i));
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

std::string decode_cyclic(std::string s){ 
    int l = s.length();
    std::string x, output;
    for (int i = 0; i < l; i += 3) {
        x = s.substr(i, std::min(3, l - i));
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

int main() {
    std::string str = "input_string";
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    return 0;
}