#include <iostream>
#include <string>
using namespace std;

string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}

string circular_shift(int x, int shift){
    string str_x = to_string(x);
    int n = str_x.size();
    shift = shift % n;
    if (shift == 0) {
        return str_x;
    }
    string result = str_x.substr(n - shift) + str_x.substr(0, n - shift);
    return result;
}