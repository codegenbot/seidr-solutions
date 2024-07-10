#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    shift = shift % num_str.size();
    if (shift == 0) {
        return num_str;
    }
    string shifted_num = num_str.substr(num_str.size() - shift) + num_str.substr(0, num_str.size() - shift);
    return shifted_num;
}

int main() {
    string circular_shift(int x, int shift);

    assert(circular_shift(11, 101) == "11");

    return 0;
}