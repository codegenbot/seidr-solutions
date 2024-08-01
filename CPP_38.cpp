#include <string>
#include <cassert>

std::string encode_cyclic(std::string s){
    std::string output;
    for (char c : s){
        output += c;
        output += 'X'; // Encoding logic example: add 'X' after each character
    }
    return output;
}

std::string decode_cyclic(std::string s){
    int l = s.length();
    std::string x, output;
    int i;
    for (i = 0; i * 3 < l; i++)
    {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output = output + x;
    }
    return output;
}

int main() {
    std::string str = "Hello World";
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    return 0;
}