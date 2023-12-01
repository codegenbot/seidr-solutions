#include <string>
#include <cassert>

std::string encode_cyclic(const std::string& s) {
    std::string output;
    int l = s.length();
    int num = (l + 2) / 3;
    std::string x;
    int i;
    for (i = 0; i * 3 < l; i++)
    {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) {
            x = x[2] + x.substr(0, 2);
        }
        output += x;
    }
    return output;
}

std::string decode_cyclic(const std::string& s) {
    std::string output;
    int l = s.length();
    int num = (l + 2) / 3;
    std::string x;
    int i;
    for (i = 0; i * 3 < l; i++)
    {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) {
            x = x[1] + x[2] + x[0];
        }
        else {
            x = x[1] + x[0];
        }
        output += x;
    }
    return output;
}

int main() {
    std::string str;
    // read input from user and store it in 'str'

    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);

    return 0;
}