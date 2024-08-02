#include <cassert> 

string string_xor(const string &a, const string &b);

int main() {
    assert(string_xor("0101", "0000") == "0101"); 

    return 0;
}