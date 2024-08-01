#include <string>
#include <cassert>

std::string encode_cyclic(std::string s){
    std::string output;
    for (int i = 0; i < s.length(); i++)
    {
        output += s[(i + 2) % s.length()];
    }
    return output;
}

std::string decode_cyclic(std::string s){
    std::string output;
    for (int i = 0; i < s.length(); i++)
    {
        output += s[(i - 2 + s.length()) % s.length()];
    }
    return output;
}

int main() {
    std::string str = "HelloWorld";
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    return 0;
}