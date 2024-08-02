#include <cassert> // Add this include statement for assert to work

// Declare string_xor function prototype before main
string string_xor(const string &a, const string &b);

int main() {
    assert(string_xor("0101", "0000") == "0101"); // Correct assert usage

    return 0;
}