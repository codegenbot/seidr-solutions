#include <iostream>
#include <cassert>

std::string encode_cyclic(std::string str){
    std::string output;
    for (int i=0; i*3<str.length(); i++) {
        std::string x = str.substr(i*3, 3);
        if (x.length() == 3) 
            x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

std::string decode_cyclic(std::string str){
    std::string output;
    for (int i=0; i*3<str.length(); i++) {
        std::string x = str.substr(i*3, 3);
        if (x.length() == 3) 
            x = x[1] + x[2] + x[0];
        output += x;
    }
    return output;
}

int main() {
    std::string str, chr;
    std::cin >> str >> chr;
    std::string encoded_str;
    str = str + chr;
    encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str + chr);
    std::cout << "Test passed" << std::endl;
    return 0;
}