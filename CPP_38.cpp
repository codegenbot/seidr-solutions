#include <string>
#include <cassert>
using namespace std;

string decode_cyclic(const string &s){
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

// Assuming there's a corresponding encode_cyclic function somewhere
string encode_cyclic(const string &s);

int main() {
    string str = "example";
    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    return 0;
}