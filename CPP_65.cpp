#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n = num_str.size();
    shift = shift % n;
    if (shift == 0) {
        return num_str;
    } else {
        string result = num_str.substr(n - shift) + num_str.substr(0, n - shift);
        return result;
    }
}

int main() {
    assert(circular_shift(11, 101) == "11");
    // Additional test cases can be added here
    return 0;
}