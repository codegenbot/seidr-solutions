#include <string>
#include <cassert>

using namespace std;

string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int n = numStr.size();
    shift %= n;
    if (shift == 0) {
        return numStr;
    } else {
        string shiftedNum = numStr.substr(n - shift) + numStr.substr(0, n - shift);
        return shiftedNum;
    }
}

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}