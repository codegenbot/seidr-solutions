#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string circular_shift(int x, int shift);

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.size();
    shift = shift % n;
    if (shift == 0) {
        return str;
    }
    string result = str.substr(n - shift) + str.substr(0, n - shift);
    return result;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    cout << "Result for circular_shift(11, 101): " << circular_shift(11, 101) << endl;
    return 0;
}